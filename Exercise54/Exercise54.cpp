#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია მთელი რიცხვების N ელემენტიანი მიმდევრიბა. იპოვეთ მოცემული მიმდევრობის უდიდესი მკაცრად ზრდადი ქვემიმდევრობის სიგრძე.
*/

int main() {
    int N;
    cin >> N;
    vector <int> a(N + 1);
    vector <int> dp(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    dp[1] = 1;
    for(int i = 2; i <= N; i++){
        for(int j = i - 1; j >= 1; j--){
            if (a[i] > a[j]){
                dp[i] = max(dp[j], dp[i]);
            }
        }
        dp[i]++;
    }

    int mx = 0;

    for(int i = 1; i <= N; i++){
        mx = max(dp[i], mx);
    }

    cout << mx;

    return 0;
}
