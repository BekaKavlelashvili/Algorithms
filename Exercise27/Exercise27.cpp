
#include <bits/stdc++.h>

using namespace std;

/*ნიკოს ძალიან უყვარს ახალი მიმდევრობების მოფიქრება, ამჯერად მან ესეთი მიმდევრობა მოიფიქრა: 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 6 6 6 6 6 6...
 ახლა კი ნიკოს უნდა ამ მიმდევრობის პირველი k წევრი ჩამოწეროს.
 რადგან ნიკოს წერა ძალიან არ უყვარს დახმარებისთვის თქვენ მოგმართათ,
 დაეხმარეთ ნიკოს და გამობეჭდეთ ნიკოს მიმდევრობის პირველი k წევრი.*/


int main(){
    int k;
    cin >> k;
    int c = 0;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= i; j++){
            if(c != k){
                cout << i << " ";
                c++;
            }
        }
    }

    return 0;
}
