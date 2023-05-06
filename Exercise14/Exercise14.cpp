#include <bits/stdc++.h>

using namespace std;

/*
	გამობეჭდეთ ეკრანზე ყველა კენტი ნატურალური რიცხვი 1-დან მოცემულ N
 რიცხვამდე (ჩათვლით).
*/

int main(){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i+=2){
        cout << i << " ";
    }

    return 0;
}

