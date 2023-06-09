#include <bits/stdc++.h>

using namespace std;

/*
ჭაობის ზედაპირზე, ერთი ნაპირიდან მეორემდე გამწკრივებულია დუმფარას  n რაოდენობის ფოთოლი. პირველ ფოთოლზე კალია გრასი ზის.
გრასის ბოლო ფოთოლზე უნდა გადასვლა, თანაც, რაც შეიძლება, სწრაფად.

გრასი სუპერრეაქტიულია, შეუძლია როგორც ფოთლის მომდევნო ფოთოლზე გადახტომა, ასევე ახერხებს იმ ფოთოლზე გადახტომასაც, რომლის ნომერი გრასის ფოთლის ნომერზე ორჯერ ან სამჯერ მეტია.
მაგალითად, თუ გრასი ზის მე-7 ნომერ ფოთოლზე, მაშინ შეძლებს, როგორც მე-8, ასევე მე-14 ან 21-ე ნომერ ფოთოლზე გადასვლას.  სხვა ფოთლებზე გრასი მე-7 ფოთლიდან ვერაფრით მოხვდება.
გრასი უკან არასოდეს ბრუნდება.

დაეხმარეთ გრასის გაარკვიოს, მინიმუმ რამდენ ნახტომში აღმოჩნდება მე-n ნომერ ფოთოლზე?
*/

int main() {
    int N;
    cin >> N;
    vector <int> dp(N + 1);

    dp[1] = 0;

    for(int i = 2; i <= N; i++){
        dp[i] = dp[i-1];
        if(i % 2 == 0){
            dp[i] = min(dp[i], dp[i/2]);
        }
        if(i % 3 == 0 ){
            dp[i] = min(dp[i], dp[i/3]);
        }
        dp[i]++;
    }

    cout << dp[N];


    return 0;
}
