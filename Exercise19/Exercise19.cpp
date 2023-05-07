#include <bits/stdc++.h>

using namespace std;

//დაწერეთ პროგრამა რომელიც გამოთვლის მოცემული რიცხვის ციფრთა ჯამს.

int main(){
    int N;
    cin >> N;
    int res = 0;

    while(N > 0){
        res += N % 10;
        N/=10;
    }

    cout << res;

    return 0;
}

