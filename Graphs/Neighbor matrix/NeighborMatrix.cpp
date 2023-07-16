#include <bits/stdc++.h>

using namespace std;

/*არაორიენტირებული გრაფი მოცემულია მეზობელთა წყვილების სახით. გარდაქმენით იგი წვეროთა მეზობლობის მატრიცად.
*გარანტირებულია, რომ გრაფი არ შეიცავს ორმაგ წიბოებს.*/

int main() {
    int N, M;
    cin >> N >> M;
    int G[N + 1][N + 1];

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            G[i][j] = 0;
        }
    }

    int x = 0, y = 0;
    for(int i = 1; i <= M; i++){
        cin >> x >> y;
        G[x][y] = G[y][x] = 1;
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << G[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
