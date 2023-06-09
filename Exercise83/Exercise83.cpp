#include <bits/stdc++.h>

using namespace std;

/*
სტრიქონი შედგება მხოლოდ ლათინური ანბანის პატარა ასოებისაგან. პატარა თარაშმა დააპირა სტრიქონის სიგრძის შემცირება შემდეგი წესით:
თუ სტრიქონში ერთმანეთის მიყოლებით 2 ზე მეტი ერთი და იგივე სიმბოლოა, მაშინ პატარა თარაში მათ ნაცვლად წერს სიმბოლოთა რაოდენობას და თვით ამ სიმბოლოს.
პატარა თარაში ახლა აპირებს შესაბამისი პროგრამის შექმნას სტრიქონების დასაშიფრად. ბუნებრივია, ამაში თქვენ უნდა დაეხმაროთ.
*/

int main() {
    string str;
    cin >> str;

    int cnt = 1;
    string newStr;


    for(int i = 1; i <= str.size(); i++){
        if(i < str.size() && str[i] == str[i - 1]){
            cnt++;
        }else{
            if(cnt > 2){
                newStr += to_string(cnt) + str[i - 1];
                cnt = 1;
            }else{
                for(int j = 1; j <= cnt; j++){
                    newStr += str[i - 1];
                }
                cnt = 1;
            }
        }
    }

    cout << newStr;

    return 0;
}
