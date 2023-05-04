#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, gug, gig;
    cin >> N >> gug >> gig;
    if(gug + 1 == gig || gig + 1 == gug || (N == gug && gig == 1) || (N == gig && gug == 1)){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
