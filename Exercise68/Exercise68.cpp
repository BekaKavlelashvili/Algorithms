#include <bits/stdc++.h>

using namespace std;

//მოცემულია ლათინური ანბანის ორი მთავრული ასო. საჭიროა დაიბეჭდოს ყველა სიმბოლო პირველი ასოდან მეორეს ჩათვლით, ანბანის მიხედვით, თანმიმდევრობით.

int main() {
    char fir, sec;
    cin >> fir >> sec;

    if((int)fir < (int)sec){
        for(int i = (int)fir; i <= (int)sec; i++){
            char ch = i;
            cout << ch << " ";
        }
    }else{
         for(int i = (int)fir; i >= (int)sec; i--){
            char ch = i;
            cout << ch << " ";
        }
    }

    return 0;
}
