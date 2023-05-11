#include <bits/stdc++.h>

using namespace std;

//მოცმეულია A და B რიცხვი, თქვენი დავალებაა A-დან B-მდე დათვალოთ ბედნიერი რიცხვების რაოდენობა.
//რიცხვს ეწოდება ბედნიერი თუკი ის 6-ნიშნა რიცხვია და  მისი პირველი სამი ციფრის ჯამი უდრის ბოლო სამი ციფრის ჯამს.

int main(){
    int A, B;
    cin >> A >> B;
    int res = 0;
    int ans1, ans2;

    for(int i = A; i <= B; i++){
        ans1 = 0;
        ans2 = 0;
        int k = i;
        for(int j = 1; j <= 3; j++){
            ans1 += k % 10;
            k /= 10;
        }

        for(int j = 1; j <= 3; j++){
            ans2 += k % 10;
            k /= 10;
        }

        if(ans1 == ans2)
            res++;
    }

    cout << res;

    return 0;
}




