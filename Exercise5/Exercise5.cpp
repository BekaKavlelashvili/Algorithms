#include <bits/stdc++.h>

using namespace std;

//მოცემულია სამნიშნა დადებითი რიცხვი, იპოვეთ მისი პირველი ორი ციფრის ჯამი.


int main() {
    int a;
    cin >> a;

    int ateuli = (a / 10) % 10;
    int aseuli = a / 100;

    cout << ateuli + aseuli;
    return 0;
}
