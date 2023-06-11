#include <bits/stdc++.h>

using namespace std;
/*
ორობით რიცხვში "შემოსაზღვრული სივრცე" ვუწოდოთ ნულების ერთობლიობას, რომელსაც თავში და ბოლოში ერთიანები ესაზღვრება.
თქვენი მიზანია მოცემულ ორიბით რიცხვში იპოვოთ უდიდესი შემოსაზღვრული სივრცის სიგრძე.
*/
int main() {
    string str;
    cin >> str;

    vector <int> a(str.size());

    int cnt = 0;

    string tmp = str;
    if(str[str.size() - 1] == '0'){
        for(int i = str.size() - 1; i >= 0; i--){
           if(str[i] != '1'){
                str.erase(i, 1);
           }else{
                break;
           }
        }
    }

   for(int i = 0; i < str.size(); i++){

        if(str[i] == '0' && i != 0){

            cnt++;
        }else{
            cnt = 0;
        }
        a.push_back(cnt);
    }

    int mx = 0;

    for(int i = 0; i < a.size(); i++){
        mx = max(a[i], mx);
    }

    cout << mx;

    return 0;
}
