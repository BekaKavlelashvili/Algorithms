#include <bits/stdc++.h>

using namespace std;

/*მოცემულია ზრდადობით დალაგებული N არაუარყოფითი მთელი რიცხვისაგან შედგენილი მიმდევრობა.
თქვენი მიზანია იპოვოთ მინიმალური არაუარყოფითი რიცხვი, რომელიც არ მოიძებნება მოცემულ მიმდევრობაში.

* გარანტირებულია, რომ მიმდევრობის ყველა ელემენტი განსხვავებულია*/

int main() {
    int N;
    cin >> N;
    vector <int> arr;
    int num;
    for(int i = 0; i < N; i++){
        num = 0;
        cin >> num;
        arr.push_back(num);
    }

    bool isLast = false;
    for(int i = 0; i < N; i++){
        if(arr[i] != i){
            cout << i;
            exit(0);
        }else{
            isLast = true;
        }
    }

    if(isLast)
        cout << arr[N - 1] + 1;

    return 0;
}
