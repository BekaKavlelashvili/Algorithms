
#include <bits/stdc++.h>

/*მოცემულია ერთი ნატურალური რიცხვი N, თქვენი დავალებაა დათვალოთ 1-დან N-მდე სრულყოფილი ბედნიერი რიცხვების რაოდენობა.
რიცხვს ეწოდება სრულყოფილი ბედნიერი რიცხვი თუკი მასში ციფრთა რაოდენობა არის ლუწი და ციფრების პირველი ნახევრის ჯამი უდრის მეორე ნახევრის ჯამს.*/

using namespace std;
int main(){
    int N;
    cin >> N;
    int c = 0;
    int ans1 = 0;
    int ans2 = 0;
    int k = 0;

    int dd = 0;
    int mm = 0;
    for(int i = 1; i <= N; i++){
        dd = i;
        mm = 0;
        k = 0;
        ans1 = 0;
        ans2 = 0;
        while(dd != 0){
            dd /= 10;
            mm++;
        }
        if(mm % 2 == 0){
            k = i;
            for(int l = 1; l <= mm/2; l++){
                ans1 += k % 10;
                k /= 10;
            }
            for(int n = 1; n <= mm/2; n++){
                ans2 += k % 10;
                 k /= 10;
            }

            if(ans1 == ans2){
                c++;
            }
        }

    }

    cout << c;

    return 0;
}

