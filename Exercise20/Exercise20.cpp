
#include <bits/stdc++.h>

using namespace std;

/*ნიკოს ბებომ კინოთეატრის ბილეთი აჩუქა, რამაც ნიკო ძალზე გაახარა, მაგრამ შემდეგ ნიკოს გაახსენდა რომ ის მხოლოდ ბედნიერი ბილეთით დადიოდა კინოთეატრში.
ბილეთს ეწოდება ბედნიერი თუკი მისი ნომრის პირველი სამი ციფრის ჯამი უდრის ბოლო სამი ციფრის ჯამს.
ნიკოსთვის იმის დადგენა ბილეთი იყო თუ არა ბედნიერი რთული აღმოჩნდა ამიტომ დახმარებისთვის თქვენ მოგმართათ.
დაეხმარეთ ნიკოს. შეგახსენებთ რომ კინოთეატრის ბილეთის ყველა ნომერი არის 6-ნიშნა რიცხვი.*/

int main(){
    int N;
    cin >> N;
    int ans2 = 0;
    int ans1 = 0;

    for(int i = 0; i < 3; i++){

        ans2 += N % 10;
        N /= 10;
    }

    for(int i = 0; i < 3; i++){
        ans1 += N % 10;
        N /= 10;
    }

    if(ans1 == ans2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

