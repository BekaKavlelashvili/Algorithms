#include <bits/stdc++.h>

using namespace std;
//მოცმეულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ 2N.
int main(){
    int N;
    cin >> N;

    long long result = 1;
    for(int i = 1; i <= N; i++){
        result *= 2;
    }

    cout << result;
    return 0;
}

