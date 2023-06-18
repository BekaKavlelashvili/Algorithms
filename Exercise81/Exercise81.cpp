#include <bits/stdc++.h>

using namespace std;

/*მოცემულია მთელი რიცხვებისგან შედგენილი ორი მასივი a და b. დაადგინეთ, b მასივის რომელ წევრებს შეიცავს a მასივი.
a მასივი დალაგებულია ზრდადობით*/

int main() {
    int a;
    cin >> a;
    vector <int> arr(a);
    for(int i = 0; i < a; i++)
        cin >> arr[i];

    int b;
    cin >> b;
    vector <int> brr(b);
    for(int i = 0; i < b; i++)
        cin >> brr[i];


    int l, r, m, x;
    for(int i = 0; i < b; i++){
        x = brr[i];
        l = 0;
        r = a - 1;
        while(l < r){
            m = (l + r) / 2;
            if(x <= arr[m]){
                r = m;
            }else l = m + 1;
        }
        if(arr[l] == x){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
