#include <bits/stdc++.h>

using namespace std;

/*
მასივს ეწოდება მკაცრად მონოტონური, თუ იგი ან მკაცრად ზრდადია, ან მკაცრად კლებადია.
მოცემულია მასივი, დაადგინეთ მკაცრად მონოტონურია თუ არა იგი.
*/

int main() {
    int N;
    cin >> N;
    vector <int> arr;
    int num;
    for(int i = 0; i < N; i++){
        num = 0;
        cin >> num;
        arr.push_back(num);
    }

    if(arr.size() < 2){
        cout << "YES";
        exit(0);
    }

    bool isSorted = false;
    for(int i = 1; i < N; i++){
        if(arr[i] > arr[i-1]){
            isSorted = true;
        }else{
            isSorted = false;
            break;
        }
    }

     if(isSorted == true){
        cout << "YES";
        exit(0);
    }

   for(int i = 1; i < N; i++){
        if(arr[i] < arr[i-1]){
            isSorted = true;
        }else{
            isSorted = false;
            break;
        }
    }

    if(isSorted)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

