#include <bits/stdc++.h>

using namespace std;

/*
კალია გრასის ისევ ჭაობის მეორე ნაპირზე უნდა გადასვლა.
ჭაობის ზედაპირზე, ერთი ნაპირიდან მეორემდე გამწკრივებულია დუმფარას n რაოდენობის ფოთოლი.
კალია გრასი ისევ პირველ ფოთოლზე ზის და ბოლო ფოთოლზე უნდა მოხვდეს, თანაც, რაც შეიძლება, სწრაფად.

გრასი სუპერრეაქტიულია, შეუძლია როგორც ფოთლის მომდევნო ფოთოლზე გადახტომა, ასევე ახერხებს იმ ფოთოლზე გადახტომასაც, რომლის ნომერი გრასის ფოთლის ნომერზე ორჯერ ან სამჯერ მეტია.
მაგალითად, თუ გრასი ზის მე-7 ნომერ ფოთოლზე, მაშინ შეძლებს, როგორც მე-8, ასევე მე-14 ან 21-ე ნომერ ფოთოლზე გადასვლას.  სხვა ფოთლებზე გრასი მე-7 ფოთლიდან ვერაფრით მოხვდება.
გრასი უკან არასოდეს ბრუნდება.

სიტუაციას ართულებს ის, რომ ერთ-ერთი ფოთოლი, რომლის ნომერია m, სახიფათოა. ამ ფოთოლზე ზის ყიყი, ბოროტი ბაყაყი. გრასი არ უნდა მოხვდეს ყიყის ფოთოლზე, თორემ დაიღუპება.

დაეხმარეთ გრასის გაარკვიოს,  შეძლებს თუ ვერა ბოლო ფოთლამდე მისვლას და თუ შეძლებს, მაშინ, მინიმუმ, რამდენ ნახტომში?
*/

int main() {
    int n, m;
    cin >> n >> m;
    vector <long long> dp(n + 1);

    long long inf = 1e9;
    dp[1] = 0;
    if(m == 1){
        dp[1] = inf;
    }

    for(int i = 2; i <= n; i++){
        if(i == m){
            dp[i] = inf;
            continue;
        }

        dp[i] = dp[i - 1];
        if(i % 2 == 0){
            dp[i] = min(dp[i ], dp[i/2]);
        }
        if(i % 3 == 0){
            dp[i] = min(dp[i], dp[i/3]);
        }
        dp[i]++;
    }

    if(dp[n] >= n){
        cout << "NO";
    }else{
        cout << "YES" << endl << dp[n];
    }


    return 0;
}
