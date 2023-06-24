#include <bits/stdc++.h>

using namespace std;

/*რიცხვის კეთილი მეზობელი ეწოდება ისეთ რიცხვს, რომელიც მკაცრად მეტია მოცემულ რიცხვზე და არის მარტივი. თქვენი მიზანია მოცემული T
 რაოდენობის რიცხვისთვის იპოვოთ და დაბეჭდოთ მათი კეთილი მეზობლები.*/

int main() {
    int T, x;
    cin >> T;

    vector <int> primes;
    primes.push_back(2);
    for(int i = 3; i <= 1000003; i+=2){
        bool isPrime = true;
        int sqr = sqrt(i);
        for(int j = 3; j <= sqr; j+=2){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            primes.push_back(i);
    }

    for(int i = 1; i <= T; i++){
        cin >> x;
        int l = 0, r = primes.size() - 1, m;
        while(l < r){
            m = (l + r) / 2;
            if(primes[m] < x){
                l = m + 1;
            }else r = m;
        }
        if(primes[l] == x) l++;
        cout << primes[l] << endl;
    }

    return 0;
}
