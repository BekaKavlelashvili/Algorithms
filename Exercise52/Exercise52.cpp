#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია N ელემენტიანი მიმდევრობა, რომელიც შეიცავს დადებით და უარყოფით რიცხვებს,
თქვენი დავალებაა მოცემული მიმდევრობისთვის იპოვოთ ისეთი უწყვეტი ქვემიმდევრობა,
რომლის ელემენტების ჯამი მაქსიმალურია, და გამოტანოთ ეს ჯამი.
*/

int main() {
    int N;
    cin >> N;
    vector <long long> a(N + 1);
    vector <long long> dp(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    dp[0] = 0;
    long long inf = -1e18;
    long long mx = inf;

    for(int i = 1; i <= N; i++)
        dp[i] = max(dp[i-1] + a[i], a[i]);

    for(int i = 1; i <= N; i++){
        mx = max(dp[i], mx);
    }

    cout << mx;

    return 0;
}
