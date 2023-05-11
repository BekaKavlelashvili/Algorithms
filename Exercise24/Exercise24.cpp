
#include <bits/stdc++.h>

using namespace std;

//მოცემულია a და b რიცხვები, თქვენი დავალებაა a-დან b-მდე გამობეჭდოთ თითოეული რიცხვის ციფრთა ჯამი.

int main(){
    int A, B;
    cin >> A >> B;
    int sum, k;

    for(int i = A; i <= B; i++){
        sum = 0;
        k = i;

        while(k > 0){
            sum += k % 10;
            k /= 10;
        }

        cout << sum << " ";
    }

    return 0;
}




