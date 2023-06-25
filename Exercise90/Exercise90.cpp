#include <bits/stdc++.h>

using namespace std;
/*
პატარა ბეკიმ ახლახანს ისწავლა რიცხვები და მათი უსასრულო მიმდევრობის დაწერა დაიწყო. მიმდევრობას შემდეგი სახე აქვს 1234567891011... ბეკის მეგობარი ნეკი ზედმეტად ცნობისმოყვარეა და მას აინტერესებს რა ციფრი წერია k
 ინდექსზე. ასეთ ერთ შეკითხვას ბეკიმ თავი მარტივად გაართვა, მაგრამ ნეკიმ T
 რაოდენობის შეკითხვაზე პასუხის გაგება მოინდომა. დაეხმარეთ ბეკის გასცეს პასუხი ნეკის ყველა შეკითხვას.
*/

int main() {
    vector <long long> digits(20, 0);

    long long c = 9;
    for (int i = 1; i <= 18; i++){
        digits[i] = digits[i - 1] + c * i;
        c = 10;
    }

    int T;
    cin >> T;
    long long x;
    for (int j = 1; j <= T; j++){
        cin >> x;
        int cnt = 1;

        for (int i = 1; i <= 18; i++){
            if (digits[i] >= x){
                cnt = i;
                break;
            }
        }

        x -= digits[cnt - 1];
        long long div = x / cnt - 1;
        long long rem = x % cnt;

        long long firstInCnt = 1;
        for (int i = 2; i <= cnt; i++)
            firstInCnt= 10;

        firstInCnt += div;
        if (rem == 0){
            cout << firstInCnt % 10 << endl;
            continue;
        }
        firstInCnt++;
        string s = to_string(firstInCnt);
        cout << s[rem - 1] << endl;
    }

    return 0;
}
