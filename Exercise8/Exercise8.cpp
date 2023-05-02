#include <bits/stdc++.h>

using namespace std;

//მოცემულია სამი ძმის ასაკი. ცნობილია, რომ მათ შორის ტყუპები არ არიან. დაწერეთ პროგრამა, რომელიც დაადგენს შუათანა ძმის ასაკს.

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if((a < b && b < c) || (c < b && b < a)){
        cout << b;
    } else{
        if((b < a && a < c) || (c < a && a < b)){
            cout << a;
        }
        else{
            if((b < c && c < a) || (a < c && c < b)){
                cout << c;
            }
        }
    }
    return 0;
}
