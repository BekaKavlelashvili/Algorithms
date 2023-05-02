#include <bits/stdc++.h>

using namespace std;

//იპოვეთ ორნიშნა რიცხვის უდიდესი ციფრი.

int main() {
    int num;
    cin >> num;
    if((num / 10) > (num % 10)){
        cout << num / 10;
    }else{
        cout << num % 10;
    }

    return 0;
}
