#include <bits/stdc++.h>

using namespace std;

/*
გამოიტანეთ მოცემულ a და b
 რიცხვებს შორის მოთავსებული ყველა კენტი რიცხვი ზრდადი თანმიმდევრობით (თვით a და b რიცხვების ჩათვლით, თუ რომელიმე კენტია)
*/

int main(){
    int a, b;
    cin >> a >> b;

    if(a > b){
        b += a;
        a = b - a;
        b -= a;
    }
    a += 1 - (a % 2);

    for(int i = a; i <= b; i+=2){
        cout << i << " ";
    }

    return 0;
}
