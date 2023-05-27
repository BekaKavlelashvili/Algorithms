#include <vector>
#include <iostream>

using namespace std;

/*
საქართველოს ერთ-ერთ ულამაზეს კუთხეში, აფხაზეთში, მდინარე ბზიფის აუზში მდებარეობს რიწის ტბა.
ამ ტბაზე ერთი ნაპირიდან მეორე ნაპირამდე ერთ მწკრივად, თანაბარი დაშორებებით განლაგებულია მცენარეების მოტივტივე ფოთლები, სულ N ცალი.
ამავე ტერიტორიაზე ბინადრობს კალია სახელად გრასი და მას ამ ფოთლების გამოყენებით სურს გადაკვეთოს რიწის ტბა.
პრობლემა ისაა, რომ ზოგიერთ ფოთოლზე ბაყაყია დასკუპული და თუ გრასი ბაყაყიან ფოთოლზე აღმოჩნდება, კარგი დღე არ დაადგება.
ამიტომ კალიამ გადაწყვიტა პირველ რიგში გამოთვალოს ბოლო ფოთოლზე რამდენი განსხვავებული გზით შეუძლია მოხვდეს, ისე რომ ბაყაყიან ფოთლებზე არ დახტეს.
მას შეუძლია მაქსიმუმ k ფოთლით წინ გადახტეს. (მაგ: თუ k=3 და გრასი იმყოფება i ფოთოლზე, მაშინ მას შეუძლია გადახტეს ფოთლებზე ნომრებით i+1,i+ და i+3)

დაეხმარეთ გრასის.
*/

int main() {
    int N, K, L;
    cin >> N >> K >> L;

    vector <int> dp(N + 1, 0);

    int num;
    for(int i = 0; i < L; i++){
        cin >> num;
        dp[num] = -1;
    }

    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= N; i++){
        if(dp[i] == -1){
            dp[i] = 0;
            continue;
        }

        for(int j = 1; j <= min(i, K); j++){
            dp[i] += dp[i - j];
        }
    }

    cout << dp[N];

    return 0;
}