#include <bits/stdc++.h>

using namespace std;

//გუკას სამი ფერის ბურთულა და ერთი ცალი ყუთი აქვს, მან ასეთი თამაში მოიფიქრა, ყუთში ჩაყარა A−რაოდენობის წითელი, B−რაოდენობის თეთრი და
//C−რაოდენობის შავი ბურთულა. შემდეგ კი ყოველ სვლაზე ყუთში ჩაუხედავად იღებს 1 ცალ ბურთულას.
//მას აინტერესებს, მინიმუმ რამდენი სვლა დასჭირდება, რომ ამოღებულ ბურთულებს შორის აუცილებლად იყოს 1 ცალი წითელი ბურთულა.


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << b + c + 1;

    return 0;
}
