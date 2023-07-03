#include <bits/stdc++.h>

using namespace std;

//მოცემულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ N-ის ფაქტორიალი, რიცხვის ფაქტორიალი არის 1-დან N-მდე ყველა რიცხვის ნამრავლი.

long long Fact(int N){
    if(N > 1)
        return Fact(N - 1) * N;
    else
        return 1;
}

int main() {
    int N;
    cin >> N;

    cout << Fact(N);
    return 0;
}
