#include <bits/stdc++.h>

using namespace std;

//მოცემულია N რაოდენობის მთელი რიცხვი. გამოიტანეთ მათი ჯამი.

int main(){
    int N;
    cin >> N;
    int a[N];
    long long sum = 0;

    for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int i = 0; i < N; i++)
        sum += a[i];

    cout << sum;

    return 0;
}


