#include <bits/stdc++.h>

using namespace std;

/*
ნიკუშამ სოფელში სხვადასხვა სიმაღლის და 10 სანტიმეტრი სიგანის ფიცრებისგან ღობე გააკეთა და შემდეგ მისი შეღებვა გადაწყვიტა, მაგრამ ერთი უცნაური წესის დაცვით:
 ის ირჩევს ერთმანეთის მიყოლებით განლაგებულ 5 ფიცარს და ღებავს მათ.
 ყოველ შემდეგ ჯერზე ის ისევ ირჩევს ერთმანეთის მიყოლებით განლაგებულ შეუღებავ 5 ფიცარს და ღებავს მათ და ასე აგრძელებს მანამ, სანამ შესაძლებელია ამ ოპერაციის გაკეთება.

ნიკუშას აინტერესებს, ჯამურად მაქსიმუმ რა ფართობის ღობის შეღებვას მოახერხებს, თუკი ოპტიმალურად იმოქმედებს.
 ღობე უნდა შეიღებოს მხოლოდ ცალი მხრიდან.
*/

int main() {
    int N;
    cin >> N;
    vector <long long> a(N + 1), dp(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    if(N < 5){
        cout << 0;
        return 0;
    }

    dp[1] = 0;
    dp[2] = 0;
    dp[3] = 0;
    dp[4] = 0;
    dp[5] = (a[1] + a[2] + a[3] + a[4] + a[5]) * 10;

    for(int i = 6; i <= N; i++){
        dp[i] = max(dp[i - 1], dp[i - 5] +
                     (a[i - 4] + a[i - 3] + a[i - 2] + a[i - 1] + a[i]) * 10
                    );
    }

    cout << dp[N];

    return 0;
}