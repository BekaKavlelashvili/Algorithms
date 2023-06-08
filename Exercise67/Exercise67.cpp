#include <bits/stdc++.h>

using namespace std;

//მოცემულია ინგლისური ანბანის პატარა სიმბოლო. დაადგინეთ მერამდენე ადგილი უკავია მოცემულ სიმბოლოს ინგლისურ ანბანში.

int main() {
    char c;
    cin >> c;

    int place = (((int)c) % 71 - 26) + 1;

    cout << place;

    return 0;
}
