#include <bits/stdc++.h>

using namespace std;

//მოცემულია n,1≤n≤100 ელემენტიანი მასივი. ეკრანზე უნდა დაიბეჭდოს მასივის ლუწ ინდექსებზე მდგომი ელემენტები.

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i+=2){
        cout << a[i] << " ";
    }


    return 0;
}



