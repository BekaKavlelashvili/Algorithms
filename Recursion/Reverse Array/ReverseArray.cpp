#include <bits/stdc++.h>

using namespace std;

//მოცემულია მთელი რიცხვებისგან შედგენილი მასივი. შემოაბრუნეთ მასივი და გამობეჭდეთ. (ანუ ჩაალაგეთ მასივში რიცხვები უკუთანმიმდევრობით).

vector<int> reverseArray(vector <int> arr, int st, int e){
    if(st < e){
        int temp = arr[st];
        arr[st] = arr[e];
        arr[e] = temp;

        return reverseArray(arr, st + 1, e - 1);
    }

    return arr;
}

int main() {
    int N;
    cin >> N;
    vector <int> a(N);

    for(int i = 0; i < N; i++)
        cin >> a[i];

    vector<int> arr = reverseArray(a, 0, N - 1);


    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
