#include <bits/stdc++.h>

using namespace std;

//მოცემულია ლათინური ანბანის რამდენიმე სიმბოლო. საჭიროა მათი რეგისტრის შეცვლა.
//ანუ, თუ სიმბოლო მთავრულია, უნდა დაპატარავდეს, და პირიქით, თუ პატარა ასოა, უნდა გამთავრულდეს.

int main() {
    int N;
    cin >> N;

    char sym;
    for(int i = 0; i < N; i++){
        cin >> sym;
        if((int)sym >= 65 && 90 >= (int)sym){
            cout << (char)(sym + 32) << endl;
        }else{
            cout << (char)(sym - 32) << endl;
        }
    }

    return 0;
}
