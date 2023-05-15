#include <bits/stdc++.h>

using namespace std;

//მოცემულია N წევრიანი მასივი. შემოსულ მასივში შემოაბრუნეთ სეგმენტი [a, b]. იხილეთ ნიმუშები.

int main() {
    int N;
    cin >> N;
    vector <int> arr;
    int num;
    int startIdx, endIdx;

    for(int i = 1; i <= N; i++){
        num = 0;
        cin >> num;
        arr.push_back(num);
    }

    cin >> startIdx >> endIdx;

    startIdx--;
    endIdx--;

    for(int i = 0; i < N; i++){
        if(i < startIdx){
            cout << arr[i] << " ";
        }
        if(i == startIdx){
            for(int j = endIdx; j >= startIdx; j--){
                cout << arr[j] << " ";
            }
            continue;
        }
        if(i > endIdx){
            cout << arr[i] << " ";
        }
    }

    return 0;
}
