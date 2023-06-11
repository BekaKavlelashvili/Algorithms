#include <bits/stdc++.h>

using namespace std;

//მოცემულია ერთმანეთისაგან ჰარით გამოყოფილი ორი სიტყვა - ადამიანის სახელი და გვარი.საჭიროა ამ ადამიანის ინიციალების გამოტანა.

int main() {
    string name, surname;
    cin >> name >> surname;

    string str = name + ' ' + surname;
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] == ' '){
            cout << str[0] << '.' << ' ' << str[i + 1] << '.';
            exit(0);
        }
    }

    return 0;
}
