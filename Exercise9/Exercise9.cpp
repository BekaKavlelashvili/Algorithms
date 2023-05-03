#include <bits/stdc++.h>

using namespace std;

//სამი კუ a,b და c ერთმანეთს ცოცვაში ეჯიბრება, დაწერეთ პროგრამა, რომელიც დაადგენს, რომელი კუ მივა ფინიშთან ყველაზე ბოლოს, თუკი ჩვენთვის ცნობილია მათი სიჩქარეები.

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a < b && a < c){
        cout << "a";
    }else{
        if(b < a && b < c){
            cout << "b";
        }else{
            cout << "c";
        }
    }

    return 0;
}
