#include <bits/stdc++.h>

using namespace std;

//მოცემულია a და b რიცხვები, თქვენი დავალებაა a-დან b-მდე გამობეჭდოთ თითოეული რიცხვის ციფრთა ჯამი.

int Sum(int N){
    if(N > 0){
        return (Sum(N / 10) + (N % 10));
    }else{
        return 0;
    }
}


int main() {
    int a, b;
    cin >> a >> b;

    for(int i = a; i <= b; i++){
        cout << Sum(i) << " ";
    }

    return 0;
}
