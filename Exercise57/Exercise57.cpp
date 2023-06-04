#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია მთელი რიცხვების N ელემენტიანი მიმდევრიბა. იპოვეთ მოცემული მიმდევრობის უდიდესი მკაცრად ზრდადი ქვემიმდევრობა.

პირველ ხაზზე გამობეჭდეთ მიღებული უდიდესი ზრდადი ქვემიმდევრობის სიგრძე.
მეორე ხაზზე გამობეჭდეთ მიღებული უდიდესი ზრდადი ქვემიმდევრობის ელემენტები.
*/

int main() {
    int N;
    cin >> N;
    vector <int> a(N + 1);
    vector <int> dp(N + 1);

    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }

    vector <int> par(N + 1);
    dp[1] = 1;
    par[1] = 1;
    for(int i = 2; i <= N; i++){
        par[i] = i;
        for(int j = i - 1; j >= 1; j--){
            if (a[i] > a[j]){
                if(dp[j] > dp[i]){
                    dp[i] = dp[j];
                    par[i] = j;
                }
            }
        }
        dp[i]++;
    }

    int mx = 1;
    for(int i = 1; i <= N; i++){
        if(dp[mx] < dp[i])
            mx = i;
    }

    cout << dp[mx] << endl;

    vector <int> ans;
    while(mx != par[mx]){
        ans.push_back(a[mx]);
        mx = par[mx];
    }

    ans.push_back(a[mx]);

    for(int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << " ";

    return 0;
}
