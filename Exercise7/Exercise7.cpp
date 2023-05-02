#include <bits/stdc++.h>

using namespace std;

//მოსწავლეს აქვს ორი ციფრი. მან ისინი ერთმანეთს მიუწერა და დაუმატა ერთი. რა უდიდესი რიცხვი შეიძლება მიიღოს მოსწავლემ?

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b){
        cout << (a*10) + b + 1;
    }else{
        cout << (b * 10) + a + 1;
    }
    return 0;
}
