#include <bits/stdc++.h>

using namespace std;

//დაბეჭდეთ ეკრანზე მოცემული N რიცხვის გამყოფების რაოდენობა.

int main(){
    int N;
    cin >> N;
    int res = 0;

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            res+=1;
        }
    }

    cout << res;

    return 0;
}


