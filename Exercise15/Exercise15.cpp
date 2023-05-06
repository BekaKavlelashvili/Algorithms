#include <bits/stdc++.h>

using namespace std;

/*
გამოიტანეთ ეკრანზე ყველა კენტი რიცხვი მოცემული N
 ნატურალური რიცხვიდან 1 მდე.
*/

int main(){
    int N;
    cin >> N;

    N -= 1 - (N % 2);
    for(int i = N; i >= 1; i-=2){
        cout << i << " ";
    }
    return 0;
}

