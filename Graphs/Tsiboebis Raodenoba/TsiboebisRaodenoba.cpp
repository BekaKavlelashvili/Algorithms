#include <bits/stdc++.h>

using namespace std;

/*მოცემულია არაორიენტირებული გრაფი მეზობლობის მატრიცით. დათვალეთ და გამობეჭდეთ წიბოების რაოდენობა.
* გრაფი შესაძლოა შეიცავდეს მარყუჟებს.*/

int main() {
    int N;
    cin >> N;
    int G[N + 1][N + 1];

    int x;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> x;
            G[i][j] = G[j][i] = x;
        }
    }

    int cnt = 0;

    for(int i = 1; i <= N; i++){
        if(G[i][i] == 1)
            cnt++;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(G[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt / 2;
    return 0;
}
