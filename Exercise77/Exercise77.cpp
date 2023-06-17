#include <bits/stdc++.h>

using namespace std;

//მოცემულია ორი სტრიქონი. ორივე მათგანი შედგება ინგლისური ანბანის პატარა სიმბოლოებისგან. შეადარეთ შემოსული სტრიქონები ლექსიკოგრაფიულად.

int main() {
    string a, b;
    cin >> a >> b;

    if(a > b)
        cout << ">";
    else if(a < b)
            cout << "<";
        else if(a == b)
            cout << "=";

    return 0;
}
