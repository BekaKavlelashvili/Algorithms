#include <bits/stdc++.h>

using namespace std;
//მოცემულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ N-ის ფაქტორიალი, რიცხვის ფაქტორიალი არის 1-დან N-მდე ყველა რიცხვის ნამრავლი.

int main(){
    int N;
    cin >> N;
    int sum = 1;

    if(N <= 15){
    for(int i = 1; i <= N; i++){
        sum *= i;
    }
    cout << sum;
    }
    return 0;
}

