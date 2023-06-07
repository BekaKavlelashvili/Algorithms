#include <bits/stdc++.h>

using namespace std;

//მოცემულია ლათინური ანბანის მთავრული სიმბოლოების მიმდევრობა. საჭიროა თითოეული მათგანის ნაცვლად ჩავწეროთ მისი შესაბამისი პატარა სიმბოლო.

int main() {
    int N;
    cin >> N;

    char sym;
    for(int i = 0; i < N; i++){
        cin >> sym;
        cout << (char)(sym + 32) << " ";
    }

    return 0;
}

