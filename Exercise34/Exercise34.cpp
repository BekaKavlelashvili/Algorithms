#include <bits/stdc++.h>

using namespace std;

//მოცემულია მთელი რიცხვების მასივი. დაწერეთ პროგრამა, რომელიც გამობეჭდავს ამ მასივს ისე, რომ პირველ და ბოლო ელემენტებს ადგილები გაცვლილი ექნებათ.

int main(){
    int N;
    cin >> N;
    int a[N];

    for(int i = 0; i < N; i++)
        cin >> a[i];

    if(N == 1){
        cout << a[0];
        exit(0);
    }

    a[0] += a[N - 1];
    a[N - 1] = a[0] - a[N - 1];
    a[0] -= a[N - 1];

    for(int i = 0; i < N; i++)
        cout << a[i] << " ";

    return 0;
}
