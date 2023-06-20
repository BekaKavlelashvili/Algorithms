#include <bits/stdc++.h>

using namespace std;

/*
ლათინური სიმბოლოებით ჩაწერილ წინადადებას ეწოდება ლამაზი, თუკი მისი ყველა სიტყვა მთავრული ასოთი იწყება, ხოლო ყველა დანარჩენი ასო არამთავრულია.
მოცემულია მხოლოდ ლათინური ანბანის სიმბოლოებით ჩაწერილი წინადადება, დაწერეთ პროგრამა, რომელიც გაალამაზებს მას.
*/

int main() {
    string str;
    getline(cin, str);

    string newStr;
    if((int)str[0] > 96){
        newStr += str[0] - 32;
    }else{
        newStr += str[0];
    }

    for(int i = 1; i <= str.size(); i++){
        if(str[i] != ' ' && str[i - 1] != ' ' && str[i] < 96){
            newStr += (int)str[i] + 32;
        }else{
            if(str[i - 1] == ' ' && str[i] > 96){
                newStr += str[i] - 32;
            }else{
                newStr += str[i];
            }
        }
    }

    cout << newStr;

    return 0;
}
