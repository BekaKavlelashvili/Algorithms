#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია მრავალნიშნა რიცხვი, რომლის ციფრების რაოდენობა არ აღემატება 500 სიმბოლოს.
დაწერეთ პროგრამა, რომელიც გამოთვლის მოცემული რიცხვის ციფრების ჯამს
*/

int main() {
    string str;
    cin >> str;

    int res = 0;
    for(int i = 0 ; i < str.size(); i++){
        res += (str[i] - '0');
    }

    cout << res;
    return 0;
}


