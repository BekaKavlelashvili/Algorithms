
#include <bits/stdc++.h>

using namespace std;

//მოცემულია a და b რიცხვები, თქვენი დავალებაა დაბეჭდოთ a-დან b-მდე  თითოეული რიცხვის გამყოფთა რაოდენობა

int main(){
    int a, b;
    cin >> a >> b;
    int co;
    for(int i = a; i <= b; i++){
            co = 0;
        for(int k = 1; k <= i; k++){
            if(i % k == 0){
                co++;
            }
        }
        cout << co << " ";
    }

    return 0;
}

