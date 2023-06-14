#include <bits/stdc++.h>

using namespace std;

//მოცემულია წინადადება, რომლის სიტყვებს შორის ზედმეტი ჰარებია. დაწერეთ პროგრამა, რომელიც წაშლის ზედმეტ ჰარებს.

int main() {
    string str;
    getline(cin, str);
    string newStr = "";

    bool isSpace = false;
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            newStr += str[i];
            isSpace = false;
        }else{
            if(!isSpace){
                newStr+= str[i];
                isSpace = true;
            }
        }
    }
    cout << newStr;

    return 0;
}
