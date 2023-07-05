#include <bits/stdc++.h>

using namespace std;

//მოცმეულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ 2N.

long long Pwr(int N){
    if(N != 0)
        return Pwr(N - 1) * 2;
    else
        return 1;

}

int main() {
    int N;
    cin >> N;

    cout << Pwr(N);

    return 0;
}
