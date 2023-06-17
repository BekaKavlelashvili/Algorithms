#include <bits/stdc++.h>

using namespace std;

//მოცემულია ორი რიცხვი. შეადარეთ ისინი ერთმანეთს.

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    if(a.size() > b.size()){
        cout << ">";
    }else{
        if(a.size() < b.size()){
            cout << "<";
        }else{
            for(int i = 0; i < a.size(); i++){
                if(a[i] > b[i]){
                    cout << ">";
                    exit(0);
                }else{
                    if(a[i] < b[i]){
                        cout << "<";
                        exit(0);
                    }
                }
            }
            cout << "=";
        }
    }
    return 0;
}
