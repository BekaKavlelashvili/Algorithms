#include <bits/stdc++.h>

using namespace std;

//მოცემულია მთელი რიცხვებისგან შედგენილი მასივი. დაადგინეთ, შეიცავს თუ არა შემოსული მასივი x-ს.
// მასივი დალაგებულია ზრდადობით

int main(){
    int N, x;
    cin >> N >> x;
    int a[N];

    for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int i = 0; i < N; i++){
        if(a[i] == x){
            cout << "YES";
            break;
        }
        else{
         if(i == N - 1){
            cout << "NO";
            break;
         }
        }
    }

    return 0;
}




