#include <bits/stdc++.h>

using namespace std;

//მოცემულია ინგლისური სიმბოლოებით შედგენილი სტრიქონი S და სეგმენტის საზღვრები l და r. S-ში შეაბრუნეთ [l,r] სეგმენტი და გამოიტანეთ მიღებული სტრიქონი.

int main() {
    string str;
    cin >> str;
    int l, r;
    cin >> l >> r;

    vector <char> segment;

    for(int i = l - 1; i < r; i++){
        segment.push_back(str[i]);
    }

    if(l == r){
        cout << str;
        exit(0);
    }

    reverse(segment.begin(), segment.end());

    for(int i = l - 1; i < r; i++){
        if(l - 1 > 0){
            str[i] = segment[i - 1];
        }else{
            str[i] = segment[i];
        }
    }

    cout << str;

    return 0;
}
