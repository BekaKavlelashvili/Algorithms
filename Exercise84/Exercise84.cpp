#include <bits/stdc++.h>

using namespace std;

//მოცემულია არაკლებადი თანმიმდევრობით დალაგებული N ელემენტიანი a მიმდევრობა.
//თქვენი დავალებაა მოცემულ მიმდევრობაში იპოვოთ x-თან უახლოესი ელემენტი (თუ ასეთი რამდენიმეა, აირჩიეთ მათგან მინიმალური).

int main() {
    int N, Q;
    cin >> N >> Q;
    vector <int> a(N + 1);

    for (int i = 1; i <= N; i++)
        cin >> a[i];

    int l, r, m, x;
    for (int i = 1; i <= Q; i++){
        cin >> x;

        l = 1;
        r = N;
        while(l < r){
            m = (l + r) / 2;
            if (a[m] < x){
                l = m + 1;
            }else {
                r = m;
            }
        }

        if (a[l] == x || l == 1){
            cout << a[l] << " ";
        }else {
            if (x - a[l - 1] <= a[l] - x){
                cout << a[l - 1] << " ";
            }else cout << a[l] << " ";
        }
    }
    return 0;
}
