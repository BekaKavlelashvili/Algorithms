#include <bits/stdc++.h>

using namespace std;

//მოცემულია n ელემენტიანი მასივი a1,a2,...,an. აგრეთვე მოცემულია ნატურალური რიცხვი s. დაადგინეთ არსებობს თუ არა მასივში ორი ელემენტი ისეთი, რომ მათი ჯამი იყოს s.

int main() {
    long long n, s;
    cin >> n >> s;
    vector <long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //sort
   sort(arr.begin(), arr.end());

    long long l, r, m, x;

    for(int i = 0; i < n; i++){
        if(s < arr[i]) continue;
        x = s - arr[i];

        l = i + 1;
        r = n;
        while(l < r){
            m = (l + r) / 2;
            if(x <= arr[m]){
                r = m;
            }else{
                l = m + 1;
            }
        }

        if(arr[l] == x){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";


    return 0;
}
