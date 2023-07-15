#include <bits/stdc++.h>

using namespace std;

/*მოცემულია გრაფი მეზობლობის მატრიცით. დაადგინეთ შეიცავს თუ არა მოცემული გრაფი მარყუჟს.
მარყუჟი ეწოდება წიბოს, რომელიც წვეროს თავის თავთან აერთებს*/

int main() {
    int N;
    cin >> N;
    int G[N + 1][N + 1];
    int v;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
                cin >> v;
            G[i][j] = v;
        }
    }

    for(int i = 1; i <= N; i++){
        if(G[i][i] == 1){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
