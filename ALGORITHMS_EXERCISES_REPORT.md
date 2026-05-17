# Algorithms Exercises Report

**Total Exercises:** 86

**Programming Language:** C++

**Repository:** BekaKavlelashvili/Algorithms

---

## Table of Contents

- [Exercise 1](#exercise-1)
- [Exercise 2](#exercise-2)
- [Exercise 3](#exercise-3)
- [Exercise 4](#exercise-4)
- [Exercise 5](#exercise-5)
- [Exercise 6](#exercise-6)
- [Exercise 7](#exercise-7)
- [Exercise 8](#exercise-8)
- [Exercise 9](#exercise-9)
- [Exercise 10](#exercise-10)
- [Exercise 11](#exercise-11)
- [Exercise 12](#exercise-12)
- [Exercise 13](#exercise-13)
- [Exercise 14](#exercise-14)
- [Exercise 15](#exercise-15)
- [Exercise 16](#exercise-16)
- [Exercise 17](#exercise-17)
- [Exercise 18](#exercise-18)
- [Exercise 19](#exercise-19)
- [Exercise 20](#exercise-20)
- [Exercise 21](#exercise-21)
- [Exercise 22](#exercise-22)
- [Exercise 23](#exercise-23)
- [Exercise 24](#exercise-24)
- [Exercise 25](#exercise-25)
- [Exercise 26](#exercise-26)
- [Exercise 27](#exercise-27)
- [Exercise 28](#exercise-28)
- [Exercise 29](#exercise-29)
- [Exercise 30](#exercise-30)
- [Exercise 31](#exercise-31)
- [Exercise 32](#exercise-32)
- [Exercise 33](#exercise-33)
- [Exercise 34](#exercise-34)
- [Exercise 35](#exercise-35)
- [Exercise 36](#exercise-36)
- [Exercise 37](#exercise-37)
- [Exercise 38](#exercise-38)
- [Exercise 39](#exercise-39)
- [Exercise 40](#exercise-40)
- [Exercise 41](#exercise-41)
- [Exercise 43](#exercise-43)
- [Exercise 44](#exercise-44)
- [Exercise 45](#exercise-45)
- [Exercise 46](#exercise-46)
- [Exercise 47](#exercise-47)
- [Exercise 48](#exercise-48)
- [Exercise 50](#exercise-50)
- [Exercise 51](#exercise-51)
- [Exercise 52](#exercise-52)
- [Exercise 53](#exercise-53)
- [Exercise 54](#exercise-54)
- [Exercise 55](#exercise-55)
- [Exercise 56](#exercise-56)
- [Exercise 57](#exercise-57)
- [Exercise 58](#exercise-58)
- [Exercise 60](#exercise-60)
- [Exercise 61](#exercise-61)
- [Exercise 63](#exercise-63)
- [Exercise 64](#exercise-64)
- [Exercise 65](#exercise-65)
- [Exercise 66](#exercise-66)
- [Exercise 67](#exercise-67)
- [Exercise 68](#exercise-68)
- [Exercise 69](#exercise-69)
- [Exercise 70](#exercise-70)
- [Exercise 71](#exercise-71)
- [Exercise 72](#exercise-72)
- [Exercise 73](#exercise-73)
- [Exercise 74](#exercise-74)
- [Exercise 75](#exercise-75)
- [Exercise 76](#exercise-76)
- [Exercise 77](#exercise-77)
- [Exercise 78](#exercise-78)
- [Exercise 79](#exercise-79)
- [Exercise 80](#exercise-80)
- [Exercise 81](#exercise-81)
- [Exercise 82](#exercise-82)
- [Exercise 83](#exercise-83)
- [Exercise 84](#exercise-84)
- [Exercise 86](#exercise-86)
- [Exercise 87](#exercise-87)
- [Exercise 88](#exercise-88)
- [Exercise 89](#exercise-89)
- [Exercise 90](#exercise-90)
- [Exercise 91](#exercise-91)

---

## Exercise 1

### Problem Description

მოცემულია ორი მთელი რიცხვი a და b. იპოვეთ მათი ჯამი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>
using namespace std;

//მოცემულია ორი მთელი რიცხვი a და b. იპოვეთ მათი ჯამი.

int main(){
    int a, b;
    cin >> a >> b;

    cout << a + b;

    return 0;
}
```

---

## Exercise 2

### Problem Description

მოცემულია ორი მთელი რიცხვი a და b. გამოიტანეთ მათი ნამრავლი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>
using namespace std;

//მოცემულია ორი მთელი რიცხვი a და b. გამოიტანეთ მათი ნამრავლი.
int main(){
    int a, b;
    cin >> a >> b;

    cout << a * b;

    return 0;
}
```

---

## Exercise 3

### Problem Description

გუკას სამი ფერის ბურთულა და ერთი ცალი ყუთი აქვს, მან ასეთი თამაში მოიფიქრა, ყუთში ჩაყარა A−რაოდენობის წითელი, B−რაოდენობის თეთრი და C−რაოდენობის შავი ბურთულა. შემდეგ კი ყოველ სვლაზე ყუთში ჩაუხედავად იღებს 1 ცალ ბურთულას. მას აინტერესებს, მინიმუმ რამდენი სვლა დასჭირდება, რომ ამოღებულ ბურთულებს შორის აუცილებლად იყოს 1 ცალი წითელი ბურთულა.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
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
```

---

## Exercise 4

### Problem Description

პატარა ვანიკოს n ცალი ფერადი ბურთი აქვს. მას უნდა რომ ბურთები ორ ყუთში გაანაწილოს ისე, რომ ყუთებში ბურთებს შორის სხვაობა მინიმალრი იყოს. რადგან ვანიკო პატარაა და თვლა კარგად არ იცის მან დასახმარებლად თქვენ მოგმართათ. თქვენ უნდა უთხრათ ვანიკოს რა იქნება ბურთებს შორის მინიმალური სხვაობა.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*პატარა ვანიკოს n ცალი ფერადი ბურთი აქვს. მას უნდა რომ ბურთები ორ ყუთში გაანაწილოს
ისე, რომ ყუთებში ბურთებს შორის სხვაობა მინიმალრი იყოს.
რადგან ვანიკო პატარაა და თვლა კარგად არ იცის მან დასახმარებლად თქვენ მოგმართათ.
თქვენ უნდა უთხრათ ვანიკოს რა იქნება ბურთებს შორის მინიმალური სხვაობა.*/

int main() {
    int a;

    cin >> a;

    cout << a % 2;

    return 0;
}
```

---

## Exercise 5

### Problem Description

მოცემულია სამნიშნა დადებითი რიცხვი, იპოვეთ მისი პირველი ორი ციფრის ჯამი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია სამნიშნა დადებითი რიცხვი, იპოვეთ მისი პირველი ორი ციფრის ჯამი.


int main() {
    int a;
    cin >> a;

    int ateuli = (a / 10) % 10;
    int aseuli = a / 100;

    cout << ateuli + aseuli;
    return 0;
}
```

---

## Exercise 6

### Problem Description

იპოვეთ ორნიშნა რიცხვის უდიდესი ციფრი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//იპოვეთ ორნიშნა რიცხვის უდიდესი ციფრი.

int main() {
    int num;
    cin >> num;
    if((num / 10) > (num % 10)){
        cout << num / 10;
    }else{
        cout << num % 10;
    }

    return 0;
}
```

---

## Exercise 7

### Problem Description

მოსწავლეს აქვს ორი ციფრი. მან ისინი ერთმანეთს მიუწერა და დაუმატა ერთი. რა უდიდესი რიცხვი შეიძლება მიიღოს მოსწავლემ?

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოსწავლეს აქვს ორი ციფრი. მან ისინი ერთმანეთს მიუწერა და დაუმატა ერთი. რა უდიდესი რიცხვი შეიძლება მიიღოს მოსწავლემ?

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b){
        cout << (a*10) + b + 1;
    }else{
        cout << (b * 10) + a + 1;
    }
    return 0;
}
```

---

## Exercise 8

### Problem Description

მოცემულია სამი ძმის ასაკი. ცნობილია, რომ მათ შორის ტყუპები არ არიან. დაწერეთ პროგრამა, რომელიც დაადგენს შუათანა ძმის ასაკს.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია სამი ძმის ასაკი. ცნობილია, რომ მათ შორის ტყუპები არ არიან. დაწერეთ პროგრამა, რომელიც დაადგენს შუათანა ძმის ასაკს.

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if((a < b && b < c) || (c < b && b < a)){
        cout << b;
    } else{
        if((b < a && a < c) || (c < a && a < b)){
            cout << a;
        }
        else{
            if((b < c && c < a) || (a < c && c < b)){
                cout << c;
            }
        }
    }
    return 0;
}
```

---

## Exercise 9

### Problem Description

სამი კუ a,b და c ერთმანეთს ცოცვაში ეჯიბრება, დაწერეთ პროგრამა, რომელიც დაადგენს, რომელი კუ მივა ფინიშთან ყველაზე ბოლოს, თუკი ჩვენთვის ცნობილია მათი სიჩქარეები.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//სამი კუ a,b და c ერთმანეთს ცოცვაში ეჯიბრება, დაწერეთ პროგრამა, რომელიც დაადგენს, რომელი კუ მივა ფინიშთან ყველაზე ბოლოს, თუკი ჩვენთვის ცნობილია მათი სიჩქარეები.

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a < b && a < c){
        cout << "a";
    }else{
        if(b < a && b < c){
            cout << "b";
        }else{
            cout << "c";
        }
    }

    return 0;
}
```

---

## Exercise 10

### Problem Description

No description available

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, gug, gig;
    cin >> N >> gug >> gig;
    if(gug + 1 == gig || gig + 1 == gug || (N == gug && gig == 1) || (N == gig && gug == 1)){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}
```

---

## Exercise 11

### Problem Description

საბავშვო მოედნის გარშემო N რაოდენობის სკამია განლაგებული და, რა თქმა უნდა, გადანომრილია 1-დან N -ის ჩათვლით. ორმა მეგობარმა, გიგიკომ და გუგიკომ სხვადასხვა დროს შეიძინეს ბილეთები საბავშვო კონცერტზე დასასწრებად. თითოეულ ბილეთს სკამის ნომერი აწერია. მეგობრებს ძალიან უნდათ ერთმანეთის გვერდით ჯდომა. დაწერეთ პროგრამა, რომელიც გამოთვლის თუ, სულ მცირე, რამდენ ბავშვს უნდა გაუცვალოს გიგიკომ ადგილი, რომ  გუგიკოს გვერდით აღმოჩნდეს. ცნობილია, რომ ადგილის გაცვლა ნებადართულია მხოლოდ იმ ბავშვთან, რომელიც მეზობელ სკამზე ზის.

### Algorithm/Data Structure Concepts

- Recursion

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;


/*საბავშვო მოედნის გარშემო N
 რაოდენობის სკამია განლაგებული და, რა თქმა უნდა, გადანომრილია 1-დან N
-ის ჩათვლით.
ორმა მეგობარმა, გიგიკომ და გუგიკომ სხვადასხვა დროს შეიძინეს ბილეთები საბავშვო კონცერტზე დასასწრებად. თითოეულ ბილეთს სკამის ნომერი აწერია.
მეგობრებს ძალიან უნდათ ერთმანეთის გვერდით ჯდომა.
დაწერეთ პროგრამა, რომელიც გამოთვლის თუ, სულ მცირე, რამდენ ბავშვს უნდა გაუცვალოს გიგიკომ ადგილი, რომ  გუგიკოს გვერდით აღმოჩნდეს.
ცნობილია, რომ ადგილის გაცვლა ნებადართულია მხოლოდ იმ ბავშვთან, რომელიც მეზობელ სკამზე ზის.*/

int main() {
    int N, gig, gug;
    cin >> N >> gig >> gug;

    if((gig == N && gug == 1) || (gug == N && gig == 1) || (gug + 1 == gig) || (gig + 1 == gug)){
        cout << 0;
    }else{
        if(gug > gig){
            if(gug - gig > (N - gug) + (gig - 1)){
                cout << (N - gug) + (gig - 1);
            }else{
                cout << gug - gig - 1;
            }
        }else{
            if(gig - gug > (N - gig) +  (gug - 1))
            {
                cout << (N - gig) + (gug - 1);
            }else{
                cout << gig - gug - 1;
            }
        }
    }

    return 0;
}
```

---

## Exercise 12

### Problem Description

საბავშვო მოედნის გარშემო N რაოდენობის სკამია განლაგებული და, რა თქმა უნდა, გადანომრილია 1-დან N -ის ჩათვლით. სამმა მეგობარმა, გიგიკომ და გუგიკომ და გივიკომ სხვადასხვა დროს შეიძინეს ბილეთები საბავშვო კონცერტზე დასასწრებად. თითოეულ ბილეთს სკამის ნომერი აწერია. მეგობრებს ძალიან უნდათ ერთმანეთის გვერდით ჯდომა. დაწერეთ პროგრამა, რომელიც დაბეჭდავს სიტყვას YES, თუ გიგიკო, გუგიკო და გივიკო ერთმანეთის გვერდით აღმოჩნდებიან, და სიტყვას NO - წინააღმდეგ შემთხვევაში.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;

/*საბავშვო მოედნის გარშემო N
 რაოდენობის სკამია განლაგებული და, რა თქმა უნდა, გადანომრილია 1-დან N
-ის ჩათვლით.
სამმა მეგობარმა, გიგიკომ და გუგიკომ და გივიკომ სხვადასხვა დროს შეიძინეს ბილეთები საბავშვო კონცერტზე დასასწრებად. თითოეულ ბილეთს სკამის ნომერი აწერია.
მეგობრებს ძალიან უნდათ ერთმანეთის გვერდით ჯდომა.
დაწერეთ პროგრამა, რომელიც დაბეჭდავს სიტყვას YES, თუ გიგიკო, გუგიკო და გივიკო ერთმანეთის გვერდით აღმოჩნდებიან, და სიტყვას NO - წინააღმდეგ შემთხვევაში.*/

int main() {
    int N, gig, gug, giv;

    cin >> N >> gig >> gug >> giv;

    if((gig + 1 == gug && gug + 1 == giv) || (gig + 1 == giv && giv + 1 == gug) || (gig == N && gug == 1 && giv == 2) || (gig == N && giv == 1 && gug == 2) || (gig == N && giv == N - 1 && gug == 1) || (gig == N && gug == N - 1 && giv == 1) ||
       (gug + 1 == gig && gig + 1 == giv) || (gug + 1 == giv && giv + 1 == gig) || (gug == N && gig == 1 && giv == 2) || (gug == N && giv == 1 && gig == 2) || (gug == N && giv == N - 1 && gig == 1) || (gug == N && gig == N - 1 && giv == 1) ||
       (giv + 1 == gig && gig + 1 == gug) || (giv + 1 == gug && gug + 1 == gig) || (giv == N && gug == 1 && gig == 2) || (giv == N && gig == 1 && gug == 2) || (giv == N && gug == N - 1 && gig == 1) || (giv == N && gig == N - 1 && gug == 1)){
            cout << "YES";
       }else{
        cout << "NO";
    }
    return 0;
}
```

---

## Exercise 13

### Problem Description

უნგრეთის დედაქალაქ ბუდაპეშტში არსებობს ერთ-ერთი ავტობუსის გაჩერება, სადაც მუდმივად იქმნება პრობლემა მგზავრთა რაოდენობასთან დაკავშირებით. პრობლემა იმდენად დიდია, რომ მგზავრთა ნაწილს ავტობუსში ფეხზე დადგომა უწევს, ნაწილი კი საერთოდ ვერ ახერხებს მგზავრობას. დაეხმარეთ ავტობუსის მძღოლს იმის დადგენაში, თუ გაჩერების შემდეგ რამდენი მგზავრი ზის სკამზე, რამდენი მგზავრობს ფეხზე დამდგარი და რამდენმა მგზავრმა ვერ მოახერხა ავტობუსში ასვლა. თავდაპირველად ავტობუსში იმყოფება N რაოდენობის მგზავრი, ხოლო ავტობუსის გაჩერებაზე იცდის  M რაოდენობის მგზავრი. მძღოლმა იცის, რომ ავტობუსში სულ X რაოდენობის სკამი და Y რაოდენობის ფეხზე დასადგომი ადგილია.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
	უნგრეთის დედაქალაქ ბუდაპეშტში არსებობს ერთ-ერთი ავტობუსის გაჩერება, სადაც მუდმივად იქმნება პრობლემა მგზავრთა რაოდენობასთან დაკავშირებით. პრობლემა იმდენად დიდია, რომ მგზავრთა ნაწილს ავტობუსში ფეხზე დადგომა უწევს, ნაწილი კი საერთოდ ვერ ახერხებს მგზავრობას. დაეხმარეთ ავტობუსის მძღოლს იმის დადგენაში, თუ გაჩერების შემდეგ რამდენი მგზავრი ზის სკამზე, რამდენი მგზავრობს ფეხზე დამდგარი და რამდენმა მგზავრმა ვერ მოახერხა ავტობუსში ასვლა. თავდაპირველად ავტობუსში იმყოფება N
 რაოდენობის მგზავრი, ხოლო ავტობუსის გაჩერებაზე იცდის  M
 რაოდენობის მგზავრი. მძღოლმა იცის, რომ ავტობუსში სულ X
 რაოდენობის სკამი და Y
 რაოდენობის ფეხზე დასადგომი ადგილია.
*/

int main(){
    int peopleInBus, peopleAtStation, seatsQuantity, standPlacesQuantity;

    int leavedPeopleAtStation = 0;
    int sittingPeople = 0;
    int standingPeople = 0;

    cin >> peopleInBus >> peopleAtStation >> seatsQuantity >> standPlacesQuantity;
    int allPassangers = peopleInBus + peopleAtStation;
    int allPlaces = seatsQuantity + standPlacesQuantity;

    if(allPassangers > allPlaces){
        leavedPeopleAtStation = allPassangers - allPlaces;
        allPassangers -= leavedPeopleAtStation;
    }else{
        peopleInBus = allPassangers;
    }

    if(allPassangers > seatsQuantity){
        standingPeople = allPassangers - seatsQuantity;
        sittingPeople = allPassangers - standingPeople;
    }else{
        standingPeople = 0;
        sittingPeople = allPassangers;
    }

    cout << sittingPeople << ' ' << standingPeople << ' ' << leavedPeopleAtStation;

    return 0;
}
```

---

## Exercise 14

### Problem Description

გამობეჭდეთ ეკრანზე ყველა კენტი ნატურალური რიცხვი 1-დან მოცემულ N რიცხვამდე (ჩათვლით).

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
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

```

---

## Exercise 15

### Problem Description

გამოიტანეთ ეკრანზე ყველა კენტი რიცხვი მოცემული N ნატურალური რიცხვიდან 1 მდე.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
გამოიტანეთ ეკრანზე ყველა კენტი რიცხვი მოცემული N
 ნატურალური რიცხვიდან 1 მდე.
*/

int main(){
    int N;
    cin >> N;

    N -= 1 - (N % 2);
    for(int i = N; i >= 1; i-=2){
        cout << i << " ";
    }
    return 0;
}

```

---

## Exercise 16

### Problem Description

გამოიტანეთ მოცემულ a და b რიცხვებს შორის მოთავსებული ყველა კენტი რიცხვი ზრდადი თანმიმდევრობით (თვით a და b რიცხვების ჩათვლით, თუ რომელიმე კენტია)

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
გამოიტანეთ მოცემულ a და b
 რიცხვებს შორის მოთავსებული ყველა კენტი რიცხვი ზრდადი თანმიმდევრობით (თვით a და b რიცხვების ჩათვლით, თუ რომელიმე კენტია)
*/

int main(){
    int a, b;
    cin >> a >> b;

    if(a > b){
        b += a;
        a = b - a;
        b -= a;
    }
    a += 1 - (a % 2);

    for(int i = a; i <= b; i+=2){
        cout << i << " ";
    }

    return 0;
}
```

---

## Exercise 17

### Problem Description

მოცემულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ N-ის ფაქტორიალი, რიცხვის ფაქტორიალი არის 1-დან N-მდე ყველა რიცხვის ნამრავლი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;
//მოცემულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ N-ის ფაქტორიალი, რიცხვის ფაქტორიალი არის 1-დან N-მდე ყველა რიცხვის ნამრავლი.

int main(){
    int N;
    cin >> N;
    int sum = 1;

    if(N <= 15){
    for(int i = 1; i <= N; i++){
        sum *= i;
    }
    cout << sum;
    }
    return 0;
}

```

---

## Exercise 18

### Problem Description

მოცმეულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ 2N.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;
//მოცმეულია ერთი დადებითი რიცხვი N, თქვენი დავალებაა იპოვოთ 2N.
int main(){
    int N;
    cin >> N;

    long long result = 1;
    for(int i = 1; i <= N; i++){
        result *= 2;
    }

    cout << result;
    return 0;
}

```

---

## Exercise 19

### Problem Description

დაწერეთ პროგრამა რომელიც გამოთვლის მოცემული რიცხვის ციფრთა ჯამს.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//დაწერეთ პროგრამა რომელიც გამოთვლის მოცემული რიცხვის ციფრთა ჯამს.

int main(){
    int N;
    cin >> N;
    int res = 0;

    while(N > 0){
        res += N % 10;
        N/=10;
    }

    cout << res;

    return 0;
}

```

---

## Exercise 20

### Problem Description

ნიკოს ბებომ კინოთეატრის ბილეთი აჩუქა, რამაც ნიკო ძალზე გაახარა, მაგრამ შემდეგ ნიკოს გაახსენდა რომ ის მხოლოდ ბედნიერი ბილეთით დადიოდა კინოთეატრში. ბილეთს ეწოდება ბედნიერი თუკი მისი ნომრის პირველი სამი ციფრის ჯამი უდრის ბოლო სამი ციფრის ჯამს. ნიკოსთვის იმის დადგენა ბილეთი იყო თუ არა ბედნიერი რთული აღმოჩნდა ამიტომ დახმარებისთვის თქვენ მოგმართათ. დაეხმარეთ ნიკოს. შეგახსენებთ რომ კინოთეატრის ბილეთის ყველა ნომერი არის 6-ნიშნა რიცხვი.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;

/*ნიკოს ბებომ კინოთეატრის ბილეთი აჩუქა, რამაც ნიკო ძალზე გაახარა, მაგრამ შემდეგ ნიკოს გაახსენდა რომ ის მხოლოდ ბედნიერი ბილეთით დადიოდა კინოთეატრში.
ბილეთს ეწოდება ბედნიერი თუკი მისი ნომრის პირველი სამი ციფრის ჯამი უდრის ბოლო სამი ციფრის ჯამს.
ნიკოსთვის იმის დადგენა ბილეთი იყო თუ არა ბედნიერი რთული აღმოჩნდა ამიტომ დახმარებისთვის თქვენ მოგმართათ.
დაეხმარეთ ნიკოს. შეგახსენებთ რომ კინოთეატრის ბილეთის ყველა ნომერი არის 6-ნიშნა რიცხვი.*/

int main(){
    int N;
    cin >> N;
    int ans2 = 0;
    int ans1 = 0;

    for(int i = 0; i < 3; i++){

        ans2 += N % 10;
        N /= 10;
    }

    for(int i = 0; i < 3; i++){
        ans1 += N % 10;
        N /= 10;
    }

    if(ans1 == ans2)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

```

---

## Exercise 21

### Problem Description

დაბეჭდეთ ეკრანზე მოცემული N რიცხვის გამყოფების რაოდენობა.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//დაბეჭდეთ ეკრანზე მოცემული N რიცხვის გამყოფების რაოდენობა.

int main(){
    int N;
    cin >> N;
    int res = 0;

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            res+=1;
        }
    }

    cout << res;

    return 0;
}


```

---

## Exercise 22

### Problem Description

დაბეჭდეთ ეკრანზე მოცემული N რიცხვის გამყოფების ჯამი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//დაბეჭდეთ ეკრანზე მოცემული N რიცხვის გამყოფების ჯამი.

int main(){
    int N;
    cin >> N;
    int res = 0;

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            res+=i;
        }
    }

    cout << res;

    return 0;
}



```

---

## Exercise 23

### Problem Description

მოცმეულია A და B რიცხვი, თქვენი დავალებაა A-დან B-მდე დათვალოთ ბედნიერი რიცხვების რაოდენობა. რიცხვს ეწოდება ბედნიერი თუკი ის 6-ნიშნა რიცხვია და  მისი პირველი სამი ციფრის ჯამი უდრის ბოლო სამი ციფრის ჯამს.

### Algorithm/Data Structure Concepts

- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცმეულია A და B რიცხვი, თქვენი დავალებაა A-დან B-მდე დათვალოთ ბედნიერი რიცხვების რაოდენობა.
//რიცხვს ეწოდება ბედნიერი თუკი ის 6-ნიშნა რიცხვია და  მისი პირველი სამი ციფრის ჯამი უდრის ბოლო სამი ციფრის ჯამს.

int main(){
    int A, B;
    cin >> A >> B;
    int res = 0;
    int ans1, ans2;

    for(int i = A; i <= B; i++){
        ans1 = 0;
        ans2 = 0;
        int k = i;
        for(int j = 1; j <= 3; j++){
            ans1 += k % 10;
            k /= 10;
        }

        for(int j = 1; j <= 3; j++){
            ans2 += k % 10;
            k /= 10;
        }

        if(ans1 == ans2)
            res++;
    }

    cout << res;

    return 0;
}




```

---

## Exercise 24

### Problem Description

მოცემულია a და b რიცხვები, თქვენი დავალებაა a-დან b-მდე გამობეჭდოთ თითოეული რიცხვის ციფრთა ჯამი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;

//მოცემულია a და b რიცხვები, თქვენი დავალებაა a-დან b-მდე გამობეჭდოთ თითოეული რიცხვის ციფრთა ჯამი.

int main(){
    int A, B;
    cin >> A >> B;
    int sum, k;

    for(int i = A; i <= B; i++){
        sum = 0;
        k = i;

        while(k > 0){
            sum += k % 10;
            k /= 10;
        }

        cout << sum << " ";
    }

    return 0;
}




```

---

## Exercise 25

### Problem Description

მოცემულია a და b რიცხვები, თქვენი დავალებაა a-დან b-მდე გამობეჭდოთ თითოეული რიცხვის ციფრთა ჯამი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;

//მოცემულია a და b რიცხვები, თქვენი დავალებაა a-დან b-მდე გამობეჭდოთ თითოეული რიცხვის ციფრთა ჯამი.

int main(){
    int A, B;
    cin >> A >> B;
    int sum, k;
    int mx = 0;

    for(int i = A; i <= B; i++){
        sum = 0;
        k = i;

        while(k > 0){
            sum += k % 10;
            k /= 10;
        }

        if(mx < sum){
            mx = sum;
        }
    }

    cout << mx;

    return 0;
}





```

---

## Exercise 26

### Problem Description

No description available

### Algorithm/Data Structure Concepts

- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;


int main(){
    int N;
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <=i; j++){
            cout << i << ' ';
        }
    }

    return 0;
}






```

---

## Exercise 27

### Problem Description

ნიკოს ძალიან უყვარს ახალი მიმდევრობების მოფიქრება, ამჯერად მან ესეთი მიმდევრობა მოიფიქრა: 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 6 6 6 6 6 6... ახლა კი ნიკოს უნდა ამ მიმდევრობის პირველი k წევრი ჩამოწეროს. რადგან ნიკოს წერა ძალიან არ უყვარს დახმარებისთვის თქვენ მოგმართათ, დაეხმარეთ ნიკოს და გამობეჭდეთ ნიკოს მიმდევრობის პირველი k წევრი.

### Algorithm/Data Structure Concepts

- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;

/*ნიკოს ძალიან უყვარს ახალი მიმდევრობების მოფიქრება, ამჯერად მან ესეთი მიმდევრობა მოიფიქრა: 1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 6 6 6 6 6 6...
 ახლა კი ნიკოს უნდა ამ მიმდევრობის პირველი k წევრი ჩამოწეროს.
 რადგან ნიკოს წერა ძალიან არ უყვარს დახმარებისთვის თქვენ მოგმართათ,
 დაეხმარეთ ნიკოს და გამობეჭდეთ ნიკოს მიმდევრობის პირველი k წევრი.*/


int main(){
    int k;
    cin >> k;
    int c = 0;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= i; j++){
            if(c != k){
                cout << i << " ";
                c++;
            }
        }
    }

    return 0;
}
```

---

## Exercise 28

### Problem Description

მოცემულია ერთი ნატურალური რიცხვი N, თქვენი დავალებაა დათვალოთ 1-დან N-მდე სრულყოფილი ბედნიერი რიცხვების რაოდენობა. რიცხვს ეწოდება სრულყოფილი ბედნიერი რიცხვი თუკი მასში ციფრთა რაოდენობა არის ლუწი და ციფრების პირველი ნახევრის ჯამი უდრის მეორე ნახევრის ჯამს.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

/*მოცემულია ერთი ნატურალური რიცხვი N, თქვენი დავალებაა დათვალოთ 1-დან N-მდე სრულყოფილი ბედნიერი რიცხვების რაოდენობა.
რიცხვს ეწოდება სრულყოფილი ბედნიერი რიცხვი თუკი მასში ციფრთა რაოდენობა არის ლუწი და ციფრების პირველი ნახევრის ჯამი უდრის მეორე ნახევრის ჯამს.*/

using namespace std;
int main(){
    int N;
    cin >> N;
    int c = 0;
    int ans1 = 0;
    int ans2 = 0;
    int k = 0;

    int dd = 0;
    int mm = 0;
    for(int i = 1; i <= N; i++){
        dd = i;
        mm = 0;
        k = 0;
        ans1 = 0;
        ans2 = 0;
        while(dd != 0){
            dd /= 10;
            mm++;
        }
        if(mm % 2 == 0){
            k = i;
            for(int l = 1; l <= mm/2; l++){
                ans1 += k % 10;
                k /= 10;
            }
            for(int n = 1; n <= mm/2; n++){
                ans2 += k % 10;
                 k /= 10;
            }

            if(ans1 == ans2){
                c++;
            }
        }

    }

    cout << c;

    return 0;
}

```

---

## Exercise 29

### Problem Description

მოცემულია a და b რიცხვები, თქვენი დავალებაა დაბეჭდოთ a-დან b-მდე  თითოეული რიცხვის გამყოფთა რაოდენობა

### Algorithm/Data Structure Concepts

- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp

#include <bits/stdc++.h>

using namespace std;

//მოცემულია a და b რიცხვები, თქვენი დავალებაა დაბეჭდოთ a-დან b-მდე  თითოეული რიცხვის გამყოფთა რაოდენობა

int main(){
    int a, b;
    cin >> a >> b;
    int co;
    for(int i = a; i <= b; i++){
            co = 0;
        for(int k = 1; k <= i; k++){
            if(i % k == 0){
                co++;
            }
        }
        cout << co << " ";
    }

    return 0;
}

```

---

## Exercise 30

### Problem Description

მოცემულია N რაოდენობის მთელი რიცხვი. გამოიტანეთ მათი ჯამი.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია N რაოდენობის მთელი რიცხვი. გამოიტანეთ მათი ჯამი.

int main(){
    int N;
    cin >> N;
    int a[N];
    long long sum = 0;

    for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int i = 0; i < N; i++)
        sum += a[i];

    cout << sum;

    return 0;
}


```

---

## Exercise 31

### Problem Description

მოცემულია n,1≤n≤100 ელემენტიანი მასივი. ეკრანზე უნდა დაიბეჭდოს მასივის ლუწ ინდექსებზე მდგომი ელემენტები.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია n,1≤n≤100 ელემენტიანი მასივი. ეკრანზე უნდა დაიბეჭდოს მასივის ლუწ ინდექსებზე მდგომი ელემენტები.

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i+=2){
        cout << a[i] << " ";
    }


    return 0;
}



```

---

## Exercise 32

### Problem Description

მდინარეზე ბორანით გადააქვთ სხვადასხვა ტვირთი. ბორანის ტვირთამწეობა უდრის M ტონას (M-ზე მეტი მასის მქონე ტვირთს ვერ უძლებს). მდინარესთან, მეორე ნაპირზე გადასატანად მოიტანეს N რაოდენობის სხვადასხვა ტვირთი, რომელთაგან თითოეულის მასა ცნობილია. დაადგინეთ, მოხერხდება თუ არა ბორანის ერთი გადასვლით ყველა ტვირთის გადატანა მდინარის მეორე ნაპირზე.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
მდინარეზე ბორანით გადააქვთ სხვადასხვა ტვირთი. ბორანის ტვირთამწეობა უდრის M ტონას (M-ზე მეტი მასის მქონე ტვირთს ვერ უძლებს).
მდინარესთან, მეორე ნაპირზე გადასატანად მოიტანეს N რაოდენობის სხვადასხვა ტვირთი, რომელთაგან თითოეულის მასა ცნობილია.

დაადგინეთ, მოხერხდება თუ არა ბორანის ერთი გადასვლით ყველა ტვირთის გადატანა მდინარის მეორე ნაპირზე.*/

int main(){
    int M, N;
    cin >> M >> N;
    int a[N];
    int sum = 0;

    for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int i = 0; i < N; i++)
        sum += a[i];

    if(sum <= M)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}



```

---

## Exercise 33

### Problem Description

მდინარეზე ბორანით გადააქვთ სხვადასხვა ტვირთი. ბორანის ტვირთამწეობა უდრის M ტონას (M-ზე მეტი მასის მქონე ტვირთს ვერ უძლებს). მდინარესთან, მეორე ნაპირზე რიგში დგას N რაოდენობის სხვადასხვა ტვირთი, რომელთაგან თითოეულის მასა ცნობილია. დაადგინეთ, რა რაოდენობის ტვირთის გადატანა მოხერხდება მდინარის მეორე ნაპირზე, ბორანის მხოლოდ პირველი გადასვლით, თუ ცნობილია, რომ ტვირთების რიგის დარღვევა არ შეიძლება.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*მდინარეზე ბორანით გადააქვთ სხვადასხვა ტვირთი. ბორანის ტვირთამწეობა უდრის M ტონას (M-ზე მეტი მასის მქონე ტვირთს ვერ უძლებს).
მდინარესთან, მეორე ნაპირზე რიგში დგას N რაოდენობის სხვადასხვა ტვირთი, რომელთაგან თითოეულის მასა ცნობილია.

დაადგინეთ, რა რაოდენობის ტვირთის გადატანა მოხერხდება მდინარის მეორე ნაპირზე, ბორანის მხოლოდ პირველი გადასვლით, თუ ცნობილია, რომ ტვირთების რიგის დარღვევა არ შეიძლება.*/

int main(){
    int M, N;
    cin >> M >> N;
    int a[N];
    int sum = 0;
    for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int i = 0; i < N; i++)
    {
        sum += a[i];
        if(sum > M)
        {
            cout << i;
            break;
        }
    }

    if(sum <= M)
        cout << N;



    return 0;
}




```

---

## Exercise 34

### Problem Description

მოცემულია მთელი რიცხვების მასივი. დაწერეთ პროგრამა, რომელიც გამობეჭდავს ამ მასივს ისე, რომ პირველ და ბოლო ელემენტებს ადგილები გაცვლილი ექნებათ.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია მთელი რიცხვების მასივი. დაწერეთ პროგრამა, რომელიც გამობეჭდავს ამ მასივს ისე, რომ პირველ და ბოლო ელემენტებს ადგილები გაცვლილი ექნებათ.

int main(){
    int N;
    cin >> N;
    int a[N];

    for(int i = 0; i < N; i++)
        cin >> a[i];

    if(N == 1){
        cout << a[0];
        exit(0);
    }

    a[0] += a[N - 1];
    a[N - 1] = a[0] - a[N - 1];
    a[0] -= a[N - 1];

    for(int i = 0; i < N; i++)
        cout << a[i] << " ";

    return 0;
}
```

---

## Exercise 35

### Problem Description

მოცემულია მთელი რიცხვებისგან შედგენილი მასივი. დაადგინეთ, შეიცავს თუ არა შემოსული მასივი x-ს. * მასივი დალაგებულია ზრდადობით

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია მთელი რიცხვებისგან შედგენილი მასივი. დაადგინეთ, შეიცავს თუ არა შემოსული მასივი x-ს. * მასივი დალაგებულია ზრდადობით

int main(){
    int N, x;
    cin >> N >> x;
    int a[N];

    for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int i = 0; i < N; i++){
        if(a[i] == x){
            cout << "YES";
            break;
        }
        else{
         if(i == N - 1){
            cout << "NO";
            break;
         }
        }
    }


    return 0;
}




```

---

## Exercise 36

### Problem Description

მოცემულია წყვილ-წყვილად განსხვავებული მთელი რიცხვებისაგან შედგენილი n ელემენტიანი მასივი a1,a2,...,an. მასივში ორი ელემენტი ქმნის ინვერსიას თუ i<j  და  ai>aj. მაგალითად, განვიხილოთ მასივი 3,1,2,4 აღნიშნულ მასივში ინვერსიას ქმნის (1,2);(1,3);  ინდექსთა წყვილები. იპოვეთ ინვერსიების რაოდენობა შემოსულ მასივში.

### Algorithm/Data Structure Concepts

- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*მოცემულია წყვილ-წყვილად განსხვავებული მთელი რიცხვებისაგან შედგენილი n ელემენტიანი მასივი a1,a2,...,an.
მასივში ორი ელემენტი ქმნის ინვერსიას თუ i<j  და  ai>aj.
მაგალითად, განვიხილოთ მასივი 3,1,2,4 აღნიშნულ მასივში ინვერსიას ქმნის (1,2);(1,3);  ინდექსთა წყვილები.

იპოვეთ ინვერსიების რაოდენობა შემოსულ მასივში.*/

int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j])
                cnt++;

        }
    }

    cout << cnt;


    return 0;
}





```

---

## Exercise 37

### Problem Description

მოცემულია ზრდადობით დალაგებული N არაუარყოფითი მთელი რიცხვისაგან შედგენილი მიმდევრობა. თქვენი მიზანია იპოვოთ მინიმალური არაუარყოფითი რიცხვი, რომელიც არ მოიძებნება მოცემულ მიმდევრობაში. * გარანტირებულია, რომ მიმდევრობის ყველა ელემენტი განსხვავებულია

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*მოცემულია ზრდადობით დალაგებული N არაუარყოფითი მთელი რიცხვისაგან შედგენილი მიმდევრობა.
თქვენი მიზანია იპოვოთ მინიმალური არაუარყოფითი რიცხვი, რომელიც არ მოიძებნება მოცემულ მიმდევრობაში.

* გარანტირებულია, რომ მიმდევრობის ყველა ელემენტი განსხვავებულია*/

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

    bool isLast = false;
    for(int i = 0; i < N; i++){
        if(arr[i] != i){
            cout << i;
            exit(0);
        }else{
            isLast = true;
        }
    }

    if(isLast)
        cout << arr[N - 1] + 1;

    return 0;
}
```

---

## Exercise 38

### Problem Description

მოცემულია N წევრიანი მასივი. შემოსულ მასივში შემოაბრუნეთ სეგმენტი [a, b]. იხილეთ ნიმუშები.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
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
```

---

## Exercise 39

### Problem Description

მასივს ეწოდება მკაცრად მონოტონური, თუ იგი ან მკაცრად ზრდადია, ან მკაცრად კლებადია. მოცემულია მასივი, დაადგინეთ მკაცრად მონოტონურია თუ არა იგი.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
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

```

---

## Exercise 40

### Problem Description

ფიზკულტურის მასწავლებელმა მოსწავლეები სიმაღლის ზრდადობის მიხედვით დააყენა და ბურთის შემოსატანად გავიდა. ცელქმა ბავშვებმა მაშინვე გამოიყენეს პირველი ნომერი ცელქობა, ამ ცელქობის წესებში წერია, რომ ყოველმა ლუწი ნომრის მქონე მოსწავლემ ადგილი უნდა გაუცვალოს მის მომდევნო მოსწავლეს. თუ რომელიმე ლუწი ნომრის მქონე ბავშვს არ ჰყავს მომდევნო მეგობარი, მაშინ, რა თქმა უნდა, ეს ბავშვი ადგილზე რჩება. მოსწავლეთა  დანომრვა იწყება ნულით. მოცემული გაქვთ მოსწავლეთა სიმაღლების პირველი ნომერი ცელქობის წესებით არეული მასივი, დაწერეთ პროგრამა, რომელიც მოცემულ მასივს დაუბრუნებს პირვანდელ ფორმას.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ფიზკულტურის მასწავლებელმა მოსწავლეები სიმაღლის ზრდადობის მიხედვით დააყენა და ბურთის შემოსატანად გავიდა.
ცელქმა ბავშვებმა მაშინვე გამოიყენეს პირველი ნომერი ცელქობა, ამ ცელქობის წესებში წერია, რომ ყოველმა ლუწი ნომრის მქონე მოსწავლემ ადგილი უნდა გაუცვალოს მის მომდევნო მოსწავლეს.
თუ რომელიმე ლუწი ნომრის მქონე ბავშვს არ ჰყავს მომდევნო მეგობარი, მაშინ, რა თქმა უნდა, ეს ბავშვი ადგილზე რჩება. მოსწავლეთა  დანომრვა იწყება ნულით.

მოცემული გაქვთ მოსწავლეთა სიმაღლების პირველი ნომერი ცელქობის წესებით არეული მასივი, დაწერეთ პროგრამა, რომელიც მოცემულ მასივს დაუბრუნებს პირვანდელ ფორმას.
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

    for(int i = 1; i < N; i++){
        if(arr[i] < arr[i - 1]){
            int temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

```

---

## Exercise 41

### Problem Description

ფიზკულტურის მასწავლებელმა მოსწავლეები სიმაღლის ზრდადობის მიხედვით დააყენა და ბურთის შემოსატანად გავიდა. ცელქმა ბავშვებმა მაშინვე გამოიყენეს მეორე ნომერი ცელქობა, ამ ცელქობის წესებში წერია, რომ ზოგიერთ კენტი ნომრის მქონე მოსწავლეს შეუძლია ერთხელ გაუცვალოს ადგილი მის მომდევნო მოსწავლეს, თუკი ამის სურვილი ორივეს აქვს. თუ რომელიმე კენტი ნომრის მქონე ბავშვს არ ჰყავს მომდევნო მეგობარი, მაშინ, რა თქმა უნდა, ეს ბავშვი ადგილზე რჩება. მოსწავლეთა  დანომრვა იწყება ერთით. მოცემული გაქვთ მოსწავლეთა სიმაღლეების მეორე ნომერი ცელქობის წესებით არეული მასივი, დაწერეთ პროგრამა, რომელიც მოცემულ მასივს დაუბრუნებს პირვანდელ ფორმას.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ფიზკულტურის მასწავლებელმა მოსწავლეები სიმაღლის ზრდადობის მიხედვით დააყენა და ბურთის შემოსატანად გავიდა.
ცელქმა ბავშვებმა მაშინვე გამოიყენეს მეორე ნომერი ცელქობა, ამ ცელქობის წესებში წერია, რომ ზოგიერთ კენტი ნომრის მქონე მოსწავლეს შეუძლია ერთხელ გაუცვალოს
 ადგილი მის მომდევნო მოსწავლეს, თუკი ამის სურვილი ორივეს აქვს. თუ რომელიმე კენტი ნომრის მქონე ბავშვს არ ჰყავს მომდევნო მეგობარი, მაშინ, რა თქმა უნდა, ეს ბავშვი ადგილზე რჩება.
 მოსწავლეთა  დანომრვა იწყება ერთით.

მოცემული გაქვთ მოსწავლეთა სიმაღლეების მეორე ნომერი ცელქობის წესებით არეული მასივი, დაწერეთ პროგრამა, რომელიც მოცემულ მასივს დაუბრუნებს პირვანდელ ფორმას.
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

    for(int i = 1; i < N; i++){
        if(arr[i] < arr[i - 1]){
            int temp = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = temp;
        }
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}


```

---

## Exercise 43

### Problem Description

პატარა თინიკო ძალიან ხალისობს ხოლმე კიბეზე თამაშისას. დღეს მან გადაწყვიტა შემდეგნაირად ითამაშოს: უნდა დადგეს კიბის დასაწყისში (ქვემოთ) და უნდა მიაღწიოს კიბის ბოლოს (ყველაზე ზედა საფეხურს), ოღონდ ისე, რომ ერთ სვლაზე ერთი ან ორი საფეხურით მაღლა გადაინაცვლოს ხოლმე. გამოთვალეთ, სვლების რამდენი განსხვავებული ვარიანტით შეიძლება მოხვდეს თინიკო კიბის ყველაზე ზედა საფეხურზე.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*პატარა თინიკო ძალიან ხალისობს ხოლმე კიბეზე თამაშისას. დღეს მან გადაწყვიტა შემდეგნაირად ითამაშოს:
უნდა დადგეს კიბის დასაწყისში (ქვემოთ) და უნდა მიაღწიოს კიბის ბოლოს (ყველაზე ზედა საფეხურს), ოღონდ ისე, რომ ერთ სვლაზე ერთი ან ორი საფეხურით მაღლა გადაინაცვლოს ხოლმე.

გამოთვალეთ, სვლების რამდენი განსხვავებული ვარიანტით შეიძლება მოხვდეს თინიკო კიბის ყველაზე ზედა საფეხურზე.
*/
int main() {
    int N;
    cin >> N;

    vector <int> dp(N + 1);

    dp[0] = 1;
    dp[1] = 1;

    for(int i = 1; i <= N; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[dp.size() - 1];

    return 0;
}
```

---

## Exercise 44

### Problem Description

პატარა თინიკო ძალიან ხალისობს ხოლმე კიბეზე თამაშისას. დღეს მან გადაწყვიტა შემდეგნაირად ითამაშოს: უნდა დადგეს კიბის დასაწყისში (ქვემოთ) და უნდა მიაღწიოს კიბის ბოლოს (ყველაზე ზედა საფეხურს), ოღონდ ისე, რომ ერთ სვლაზე ერთი ან ორი საფეხურით მაღლა გადაინაცვლოს ხოლმე. საქმეს ის ართულებს, რომ კიბის ერთ-ერთი საფეხური ჩატეხილია და თინიკოს მასზე დაბიჯება არ შეუძლია. გამოთვალეთ, სვლების რამდენი განსხვავებული ვარიანტით შეიძლება მოხვდეს თინიკო კიბის ყველაზე ზედა საფეხურზე.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
პატარა თინიკო ძალიან ხალისობს ხოლმე კიბეზე თამაშისას. დღეს მან გადაწყვიტა შემდეგნაირად ითამაშოს:
უნდა დადგეს კიბის დასაწყისში (ქვემოთ) და უნდა მიაღწიოს კიბის ბოლოს (ყველაზე ზედა საფეხურს), ოღონდ ისე, რომ ერთ სვლაზე ერთი ან ორი საფეხურით მაღლა გადაინაცვლოს ხოლმე.
საქმეს ის ართულებს, რომ კიბის ერთ-ერთი საფეხური ჩატეხილია და თინიკოს მასზე დაბიჯება არ შეუძლია.

გამოთვალეთ, სვლების რამდენი განსხვავებული ვარიანტით შეიძლება მოხვდეს თინიკო კიბის ყველაზე ზედა საფეხურზე.
*/

int main() {
    int N, x;
    cin >> N >> x;
    vector <int> dp(N + 1);

    dp[0] = 1;
    if(x == 1){
        dp[1] = 0;
    }else{
        dp[1] = 1;
    }

    for(int i = 2; i <= N; i++){
        if(x == i){
            dp[i] = 0;
            dp[i + 1] = dp[i - 1];
        }else{
            dp[i] = dp[i - 1] + dp[i - 2];
        }
    }

    cout << dp[N];
    return 0;
}
```

---

## Exercise 45

### Problem Description

ბაჭია ბაბის ისე ეჩქარება და ისე გარბის კიბეზე, რომ საფეხურიდან საფეხურზე გადახტომას ვერ ახერხებს, აუცილებლად ტოვებს ან ერთს, ან ორ საფეხურს. კიბის საფეხურების რაოდენობაა n. ბაბის აინტერესებს, ბოლო საფეხურზე ასვლის რამდენი ვარიანტი აქვს. პროგრამისტებო, დაეხმარეთ.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;
/*
ბაჭია ბაბის ისე ეჩქარება და ისე გარბის კიბეზე, რომ საფეხურიდან საფეხურზე გადახტომას ვერ ახერხებს, აუცილებლად ტოვებს ან ერთს, ან ორ საფეხურს.
კიბის საფეხურების რაოდენობაა n.
ბაბის აინტერესებს, ბოლო საფეხურზე ასვლის რამდენი ვარიანტი აქვს. პროგრამისტებო, დაეხმარეთ.*/
int main() {
    int N;
    cin >> N;
    vector <int> dp(N + 1);

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4; i <= N; i++){
        dp[i] = dp[i - 2] + dp[i - 3];
    }

    cout << dp[N];

    return 0;
}

```

---

## Exercise 46

### Problem Description

ერთი უცნაური ქვეყნის უცნაურ საბაჟოზე უცნაური კიბე დგას. ქვეყანაში შემომსვლელი ნებისმიერი ტურისტი ვალდებულია ამ კიბეზე ავიდეს. კიბის თითოეულ საფეხურს აწერია ნატურალური რიცხვი, რაც ნიშნავს, რომ თუ ამ საფეხურზე დააბიჯებ, ზუსტად იმდენ თანხას იხდი, რა რიცხვიც აწერია მას. ტურისტს უფლება აქვს გამოტოვოს ერთი საფეხური, როცა უნდა და რამდენჯერაც უნდა. დაეხმარეთ ტურისტს იმის გარკვევაში, მინიმუმ რა რაოდენობის თანხის გადახდა მოუწევს კიბეზე ასვლის შემდეგ, თუკი მოხერხებულად გამოიყენებს საფეხურის გამოტოვების უფლებას.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ერთი უცნაური ქვეყნის უცნაურ საბაჟოზე უცნაური კიბე დგას. ქვეყანაში შემომსვლელი ნებისმიერი ტურისტი ვალდებულია ამ კიბეზე ავიდეს.
კიბის თითოეულ საფეხურს აწერია ნატურალური რიცხვი, რაც ნიშნავს, რომ თუ ამ საფეხურზე დააბიჯებ, ზუსტად იმდენ თანხას იხდი, რა რიცხვიც აწერია მას.
ტურისტს უფლება აქვს გამოტოვოს ერთი საფეხური, როცა უნდა და რამდენჯერაც უნდა.

დაეხმარეთ ტურისტს იმის გარკვევაში, მინიმუმ რა რაოდენობის თანხის გადახდა მოუწევს კიბეზე ასვლის შემდეგ, თუკი მოხერხებულად გამოიყენებს საფეხურის გამოტოვების უფლებას.
*/

int main() {
    int N;
    cin >> N;

    long long d[N + 1], a[N + 1];
    int num;
    for(int i = 1; i <= N; i++){
        cin >> num;
        a[i] = num;
    }

    d[1] = a[1];
    d[2] = a[2];
    for(int i = 3; i <= N; i++){
        d[i] = min(d[i - 1], d[i - 2]) + a[i];
    }

    cout << d[N];
    return 0;
}
```

---

## Exercise 47

### Problem Description

ჭაობის ზედაპირზე, ერთი ნაპირიდან მეორემდე გამწკრივებულია დუმფარას  n რაოდენობის ფოთოლი. პირველ ფოთოლზე კალია გრასი ზის. გრასის ბოლო ფოთოლზე უნდა გადასვლა, თანაც, რაც შეიძლება, სწრაფად. გრასი სუპერრეაქტიულია, შეუძლია როგორც ფოთლის მომდევნო ფოთოლზე გადახტომა, ასევე ახერხებს იმ ფოთოლზე გადახტომასაც, რომლის ნომერი გრასის ფოთლის ნომერზე ორჯერ ან სამჯერ მეტია. მაგალითად, თუ გრასი ზის მე-7 ნომერ ფოთოლზე, მაშინ შეძლებს, როგორც მე-8, ასევე მე-14 ან 21-ე ნომერ ფოთოლზე გადასვლას.  სხვა ფოთლებზე გრასი მე-7 ფოთლიდან ვერაფრით მოხვდება. გრასი უკან არასოდეს ბრუნდება. დაეხმარეთ გრასის გაარკვიოს, მინიმუმ რამდენ ნახტომში აღმოჩნდება მე-n ნომერ ფოთოლზე?

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Recursion

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ჭაობის ზედაპირზე, ერთი ნაპირიდან მეორემდე გამწკრივებულია დუმფარას  n რაოდენობის ფოთოლი. პირველ ფოთოლზე კალია გრასი ზის.
გრასის ბოლო ფოთოლზე უნდა გადასვლა, თანაც, რაც შეიძლება, სწრაფად.

გრასი სუპერრეაქტიულია, შეუძლია როგორც ფოთლის მომდევნო ფოთოლზე გადახტომა, ასევე ახერხებს იმ ფოთოლზე გადახტომასაც, რომლის ნომერი გრასის ფოთლის ნომერზე ორჯერ ან სამჯერ მეტია.
მაგალითად, თუ გრასი ზის მე-7 ნომერ ფოთოლზე, მაშინ შეძლებს, როგორც მე-8, ასევე მე-14 ან 21-ე ნომერ ფოთოლზე გადასვლას.  სხვა ფოთლებზე გრასი მე-7 ფოთლიდან ვერაფრით მოხვდება.
გრასი უკან არასოდეს ბრუნდება.

დაეხმარეთ გრასის გაარკვიოს, მინიმუმ რამდენ ნახტომში აღმოჩნდება მე-n ნომერ ფოთოლზე?
*/

int main() {
    int N;
    cin >> N;
    vector <int> dp(N + 1);

    dp[1] = 0;

    for(int i = 2; i <= N; i++){
        dp[i] = dp[i-1];
        if(i % 2 == 0){
            dp[i] = min(dp[i], dp[i/2]);
        }
        if(i % 3 == 0 ){
            dp[i] = min(dp[i], dp[i/3]);
        }
        dp[i]++;
    }

    cout << dp[N];


    return 0;
}
```

---

## Exercise 48

### Problem Description

პატარა თინიკო ძალიან ხალისობს ხოლმე კიბეზე თამაშისას. დღეს მან გადაწყვიტა შემდეგნაირად ითამაშოს: უნდა დადგეს კიბის დასაწყისში (ქვემოთ) და უნდა მიაღწიოს კიბის ბოლოს (ყველაზე ზედა საფეხურს), ოღონდ ისე, რომ ერთ სვლაზე ერთი ან ორი საფეხურით მაღლა გადაინაცვლოს ხოლმე. საქმეს ის ართულებს, რომ კიბის რამდენიმე საფეხური ჩატეხილია და თინიკოს მასზე დაბიჯება არ შეუძლია. გამოთვალეთ, სვლების რამდენი განსხვავებული ვარიანტით შეიძლება მოხვდეს თინიკო კიბის ყველაზე ზედა საფეხურზე.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
პატარა თინიკო ძალიან ხალისობს ხოლმე კიბეზე თამაშისას. დღეს მან გადაწყვიტა შემდეგნაირად ითამაშოს: უნდა დადგეს კიბის დასაწყისში (ქვემოთ) და
უნდა მიაღწიოს კიბის ბოლოს (ყველაზე ზედა საფეხურს), ოღონდ ისე, რომ ერთ სვლაზე ერთი ან ორი საფეხურით მაღლა გადაინაცვლოს ხოლმე.
საქმეს ის ართულებს, რომ კიბის რამდენიმე საფეხური ჩატეხილია და თინიკოს მასზე დაბიჯება არ შეუძლია.

გამოთვალეთ, სვლების რამდენი განსხვავებული ვარიანტით შეიძლება მოხვდეს თინიკო კიბის ყველაზე ზედა საფეხურზე.
*/

int main() {
    int N, M;
    cin >> N >> M;
    vector <int> dp(N + 1, 1);

    int num;
    for(int i = 1; i <= M; i++){
        cin >> num;
        dp[num] = 0;
    }


    for(int i = 2; i <= N; i++){
       if(dp[i] == 0)
            continue;

       dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << (dp[N] ? dp[N] : -1);

    return 0;
}

```

---

## Exercise 50

### Problem Description

საქართველოს ერთ-ერთ ულამაზეს კუთხეში, აფხაზეთში, მდინარე ბზიფის აუზში მდებარეობს რიწის ტბა. ამ ტბაზე ერთი ნაპირიდან მეორე ნაპირამდე ერთ მწკრივად, თანაბარი დაშორებებით განლაგებულია მცენარეების მოტივტივე ფოთლები, სულ N ცალი. ამავე ტერიტორიაზე ბინადრობს კალია სახელად გრასი და მას ამ ფოთლების გამოყენებით სურს გადაკვეთოს რიწის ტბა. პრობლემა ისაა, რომ ზოგიერთ ფოთოლზე ბაყაყია დასკუპული და თუ გრასი ბაყაყიან ფოთოლზე აღმოჩნდება, კარგი დღე არ დაადგება. ამიტომ კალიამ გადაწყვიტა პირველ რიგში გამოთვალოს ბოლო ფოთოლზე რამდენი განსხვავებული გზით შეუძლია მოხვდეს, ისე რომ ბაყაყიან ფოთლებზე არ დახტეს. მას შეუძლია მაქსიმუმ k ფოთლით წინ გადახტეს. (მაგ: თუ k=3 და გრასი იმყოფება i ფოთოლზე, მაშინ მას შეუძლია გადახტეს ფოთლებზე ნომრებით i+1,i+ და i+3) დაეხმარეთ გრასის.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <vector>
#include <iostream>

using namespace std;

/*
საქართველოს ერთ-ერთ ულამაზეს კუთხეში, აფხაზეთში, მდინარე ბზიფის აუზში მდებარეობს რიწის ტბა.
ამ ტბაზე ერთი ნაპირიდან მეორე ნაპირამდე ერთ მწკრივად, თანაბარი დაშორებებით განლაგებულია მცენარეების მოტივტივე ფოთლები, სულ N ცალი.
ამავე ტერიტორიაზე ბინადრობს კალია სახელად გრასი და მას ამ ფოთლების გამოყენებით სურს გადაკვეთოს რიწის ტბა.
პრობლემა ისაა, რომ ზოგიერთ ფოთოლზე ბაყაყია დასკუპული და თუ გრასი ბაყაყიან ფოთოლზე აღმოჩნდება, კარგი დღე არ დაადგება.
ამიტომ კალიამ გადაწყვიტა პირველ რიგში გამოთვალოს ბოლო ფოთოლზე რამდენი განსხვავებული გზით შეუძლია მოხვდეს, ისე რომ ბაყაყიან ფოთლებზე არ დახტეს.
მას შეუძლია მაქსიმუმ k ფოთლით წინ გადახტეს. (მაგ: თუ k=3 და გრასი იმყოფება i ფოთოლზე, მაშინ მას შეუძლია გადახტეს ფოთლებზე ნომრებით i+1,i+ და i+3)

დაეხმარეთ გრასის.
*/

int main() {
    int N, K, L;
    cin >> N >> K >> L;

    vector <int> dp(N + 1, 0);

    int num;
    for(int i = 0; i < L; i++){
        cin >> num;
        dp[num] = -1;
    }

    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i <= N; i++){
        if(dp[i] == -1){
            dp[i] = 0;
            continue;
        }

        for(int j = 1; j <= min(i, K); j++){
            dp[i] += dp[i - j];
        }
    }

    cout << dp[N];

    return 0;
}
```

---

## Exercise 51

### Problem Description

კალია გრასის ისევ ჭაობის მეორე ნაპირზე უნდა გადასვლა. ჭაობის ზედაპირზე, ერთი ნაპირიდან მეორემდე გამწკრივებულია დუმფარას n რაოდენობის ფოთოლი. კალია გრასი ისევ პირველ ფოთოლზე ზის და ბოლო ფოთოლზე უნდა მოხვდეს, თანაც, რაც შეიძლება, სწრაფად. გრასი სუპერრეაქტიულია, შეუძლია როგორც ფოთლის მომდევნო ფოთოლზე გადახტომა, ასევე ახერხებს იმ ფოთოლზე გადახტომასაც, რომლის ნომერი გრასის ფოთლის ნომერზე ორჯერ ან სამჯერ მეტია. მაგალითად, თუ გრასი ზის მე-7 ნომერ ფოთოლზე, მაშინ შეძლებს, როგორც მე-8, ასევე მე-14 ან 21-ე ნომერ ფოთოლზე გადასვლას.  სხვა ფოთლებზე გრასი მე-7 ფოთლიდან ვერაფრით მოხვდება. გრასი უკან არასოდეს ბრუნდება. სიტუაციას ართულებს ის, რომ ერთ-ერთი ფოთოლი, რომლის ნომერია m, სახიფათოა. ამ ფოთოლზე ზის ყიყი, ბოროტი ბაყაყი. გრასი არ უნდა მოხვდეს ყიყის ფოთოლზე, თორემ დაიღუპება. დაეხმარეთ გრასის გაარკვიოს,  შეძლებს თუ ვერა ბოლო ფოთლამდე მისვლას და თუ შეძლებს, მაშინ, მინიმუმ, რამდენ ნახტომში?

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
კალია გრასის ისევ ჭაობის მეორე ნაპირზე უნდა გადასვლა.
ჭაობის ზედაპირზე, ერთი ნაპირიდან მეორემდე გამწკრივებულია დუმფარას n რაოდენობის ფოთოლი.
კალია გრასი ისევ პირველ ფოთოლზე ზის და ბოლო ფოთოლზე უნდა მოხვდეს, თანაც, რაც შეიძლება, სწრაფად.

გრასი სუპერრეაქტიულია, შეუძლია როგორც ფოთლის მომდევნო ფოთოლზე გადახტომა, ასევე ახერხებს იმ ფოთოლზე გადახტომასაც, რომლის ნომერი გრასის ფოთლის ნომერზე ორჯერ ან სამჯერ მეტია.
მაგალითად, თუ გრასი ზის მე-7 ნომერ ფოთოლზე, მაშინ შეძლებს, როგორც მე-8, ასევე მე-14 ან 21-ე ნომერ ფოთოლზე გადასვლას.  სხვა ფოთლებზე გრასი მე-7 ფოთლიდან ვერაფრით მოხვდება.
გრასი უკან არასოდეს ბრუნდება.

სიტუაციას ართულებს ის, რომ ერთ-ერთი ფოთოლი, რომლის ნომერია m, სახიფათოა. ამ ფოთოლზე ზის ყიყი, ბოროტი ბაყაყი. გრასი არ უნდა მოხვდეს ყიყის ფოთოლზე, თორემ დაიღუპება.

დაეხმარეთ გრასის გაარკვიოს,  შეძლებს თუ ვერა ბოლო ფოთლამდე მისვლას და თუ შეძლებს, მაშინ, მინიმუმ, რამდენ ნახტომში?
*/

int main() {
    int n, m;
    cin >> n >> m;
    vector <long long> dp(n + 1);

    long long inf = 1e9;
    dp[1] = 0;
    if(m == 1){
        dp[1] = inf;
    }

    for(int i = 2; i <= n; i++){
        if(i == m){
            dp[i] = inf;
            continue;
        }

        dp[i] = dp[i - 1];
        if(i % 2 == 0){
            dp[i] = min(dp[i ], dp[i/2]);
        }
        if(i % 3 == 0){
            dp[i] = min(dp[i], dp[i/3]);
        }
        dp[i]++;
    }

    if(dp[n] >= n){
        cout << "NO";
    }else{
        cout << "YES" << endl << dp[n];
    }


    return 0;
}
```

---

## Exercise 52

### Problem Description

მოცემულია N ელემენტიანი მიმდევრობა, რომელიც შეიცავს დადებით და უარყოფით რიცხვებს, თქვენი დავალებაა მოცემული მიმდევრობისთვის იპოვოთ ისეთი უწყვეტი ქვემიმდევრობა, რომლის ელემენტების ჯამი მაქსიმალურია, და გამოტანოთ ეს ჯამი.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია N ელემენტიანი მიმდევრობა, რომელიც შეიცავს დადებით და უარყოფით რიცხვებს,
თქვენი დავალებაა მოცემული მიმდევრობისთვის იპოვოთ ისეთი უწყვეტი ქვემიმდევრობა,
რომლის ელემენტების ჯამი მაქსიმალურია, და გამოტანოთ ეს ჯამი.
*/

int main() {
    int N;
    cin >> N;
    vector <long long> a(N + 1);
    vector <long long> dp(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    dp[0] = 0;
    long long inf = -1e18;
    long long mx = inf;

    for(int i = 1; i <= N; i++)
        dp[i] = max(dp[i-1] + a[i], a[i]);

    for(int i = 1; i <= N; i++){
        mx = max(dp[i], mx);
    }

    cout << mx;

    return 0;
}
```

---

## Exercise 53

### Problem Description

საფეხურიანი კიბის დასაწყისში, მიწაზე, დგას ბაჭია ბაბი. კიბის საფეხურებზე კომბოსტოებია დალაგებული, თითოეულ საფეხურზე შეიძლება სხვადასხვა რაოდენობის კომბოსტო იდოს. ბაბის უნდა, რაც შეიძლება ბევრი კომბოსტო მოაგროვოს, მაგრამ იცის, რომ კიბეზე ასვლისას უცნაური წესების შესრულება მოუწევს: თუ რომელიმე საფეხურიდან (ბოლოს გარდა) ბაბიმ კომბოსტოები აიღო, მაშინ შეუძლია მომდევნო საფეხურიდანაც აიღოს, მაგრამ ამის შემდეგ მესამე საფეხური აუცილებლად უნდა გამოტოვოს. სხვა სიტყვებით რომ ვთქვათ, ბაბის არა აქვს ზედიზედ სამი მომდევნო საფეხურიდან კომბოსტოების აღების უფლება. გამოტოვებულ საფეხურზე დაბრუნების უფლება, წესების მიხედვით, ბაბის არა აქვს. დაეხმარეთ მას შეგროვებული კომბოსტოების უდიდესი რაოდენობის დადგენაში.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
საფეხურიანი კიბის დასაწყისში, მიწაზე, დგას ბაჭია ბაბი. კიბის საფეხურებზე კომბოსტოებია დალაგებული, თითოეულ საფეხურზე შეიძლება სხვადასხვა რაოდენობის კომბოსტო იდოს.
ბაბის უნდა, რაც შეიძლება ბევრი კომბოსტო მოაგროვოს, მაგრამ იცის, რომ კიბეზე ასვლისას უცნაური წესების შესრულება მოუწევს:
თუ რომელიმე საფეხურიდან (ბოლოს გარდა) ბაბიმ კომბოსტოები აიღო, მაშინ შეუძლია მომდევნო საფეხურიდანაც აიღოს, მაგრამ ამის შემდეგ მესამე საფეხური აუცილებლად უნდა გამოტოვოს.
სხვა სიტყვებით რომ ვთქვათ, ბაბის არა აქვს ზედიზედ სამი მომდევნო საფეხურიდან კომბოსტოების აღების უფლება.

გამოტოვებულ საფეხურზე დაბრუნების უფლება, წესების მიხედვით, ბაბის არა აქვს.
დაეხმარეთ მას შეგროვებული კომბოსტოების უდიდესი რაოდენობის დადგენაში.
*/

int main() {
    int N;
    cin >> N;
    vector <long long> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    vector <long long> dp(N);
    if(N >= 1) dp[0] = a[0];
    if(N >= 2) dp[1] = a[1] + a[0];
    if(N >= 3) dp[2] = max({a[1] + a[0], a[1] + a[2], a[0] + a[2]});

    for(int i = 3; i < N; i++){
        dp[i] = max({dp[i - 1], a[i] + dp[i - 2], dp[i - 3] + a[i - 1] + a[i]});
    }

    cout << dp[N - 1];

    return 0;
}
```

---

## Exercise 54

### Problem Description

მოცემულია მთელი რიცხვების N ელემენტიანი მიმდევრიბა. იპოვეთ მოცემული მიმდევრობის უდიდესი მკაცრად ზრდადი ქვემიმდევრობის სიგრძე.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია მთელი რიცხვების N ელემენტიანი მიმდევრიბა. იპოვეთ მოცემული მიმდევრობის უდიდესი მკაცრად ზრდადი ქვემიმდევრობის სიგრძე.
*/

int main() {
    int N;
    cin >> N;
    vector <int> a(N + 1);
    vector <int> dp(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    dp[1] = 1;
    for(int i = 2; i <= N; i++){
        for(int j = i - 1; j >= 1; j--){
            if (a[i] > a[j]){
                dp[i] = max(dp[j], dp[i]);
            }
        }
        dp[i]++;
    }

    int mx = 0;

    for(int i = 1; i <= N; i++){
        mx = max(dp[i], mx);
    }

    cout << mx;

    return 0;
}
```

---

## Exercise 55

### Problem Description

ბანკომატში არის K ცალი სხვადასხვა ღირებულების უსასრულო რაოდენობის კუპიურა. ნიკუშას სურს ბანკომატიდან N ღირებულების თანხის გამოტანა, მაგრამ ამჟამად ბანკომატი გაფუჭებულია, მიტომ ბანკმა დახმარებისთვის თქვენ მოგმართათ. დაეხმარეთ მათ და დაწერეთ პროგრამა, რომელიც ბანკომატში არსებული კუპიურების გათვალისწინებით, ნიკუშას მისცემს მის მიერ მოთხოვნილ თანხას მინიმალური რაოდენობის კუპიურებით.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;
/*
ბანკომატში არის K ცალი სხვადასხვა ღირებულების უსასრულო რაოდენობის კუპიურა.
ნიკუშას სურს ბანკომატიდან N ღირებულების თანხის გამოტანა, მაგრამ ამჟამად ბანკომატი გაფუჭებულია,
მიტომ ბანკმა დახმარებისთვის თქვენ მოგმართათ.

დაეხმარეთ მათ და დაწერეთ პროგრამა, რომელიც ბანკომატში არსებული კუპიურების გათვალისწინებით, ნიკუშას მისცემს მის მიერ მოთხოვნილ თანხას მინიმალური რაოდენობის კუპიურებით.
*/
int main() {
    int N, M;
    cin >> N >> M;
    vector <int> dp(M + 1, 1000000), a(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    dp[0] = 0;

    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= N; j++){
            if(i - a[j] >= 0){
                dp[i] = min(dp[i], dp[i - a[j]]);
            }
        }
        dp[i]++;
    }

    cout << (dp[M] >= 1000000 ? -1 : dp[M]);

    return 0;
}
```

---

## Exercise 56

### Problem Description

საქართველოს ალპინისტთა ფედერაციამ გადაწყვიტა მორიგი ექსპედიცია გაეგზავნა მყინვარწვერის კიდევ ერთხელ დასალაშქრად. უშუალოდ მწვერვალზე ასვლის დაწყებამდე საჭიროა S კგ ტვირთის საბაზო ბანაკში კონტეინერებით გადატანა, რომელთა გამქირავებელ ფირმას აქვს N რაოდენობის განსხვავებული ტევადობის კონტეინერი. მათგან უმცირესის ტევადობა 1 კგ-ია. ფირმას თითოეული ტევადობის კონტეინერი განუსაზღვრელი რაოდენობით აქვს. საქმე ისაა, რომ კონტეინერთა გაქირავების ფასი მათ რაოდენობაზეა დამოკიდებული და არა ტევადობაზე. ამიტომ, ცხადია, ალპინისტთა ფედერაციას ისე სურს ისინი შეარჩიოს, რომ მათი რაოდენობა მინიმალური იყოს. დაწერეთ პროგრამა, რომელიც S - ის, N - ის და განსხვავებული კონტეინერების ტევადობათა მოცემული მნიშვნელობებისათვის დაადგენს კონტეინერთა იმ მინიმალურ რაოდენობას, რომლებიც უნდა დაიქირაოს საქართველოს ალპინისტთა ფედერაციამ ბარგის ისე გადასატანად, რომ ყველა კონტეინერი სავსე იყოს.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;
/*
საქართველოს ალპინისტთა ფედერაციამ გადაწყვიტა მორიგი ექსპედიცია გაეგზავნა მყინვარწვერის კიდევ ერთხელ დასალაშქრად. უშუალოდ მწვერვალზე ასვლის დაწყებამდე საჭიროა S
 კგ ტვირთის საბაზო ბანაკში კონტეინერებით გადატანა, რომელთა გამქირავებელ ფირმას აქვს N
 რაოდენობის განსხვავებული ტევადობის კონტეინერი. მათგან უმცირესის ტევადობა 1 კგ-ია.
 ფირმას თითოეული ტევადობის კონტეინერი განუსაზღვრელი რაოდენობით აქვს. საქმე ისაა, რომ კონტეინერთა გაქირავების ფასი მათ რაოდენობაზეა დამოკიდებული და არა ტევადობაზე.
  ამიტომ, ცხადია, ალპინისტთა ფედერაციას ისე სურს ისინი შეარჩიოს, რომ მათი რაოდენობა მინიმალური იყოს.

დაწერეთ პროგრამა, რომელიც S - ის, N - ის და განსხვავებული კონტეინერების ტევადობათა მოცემული მნიშვნელობებისათვის დაადგენს კონტეინერთა იმ მინიმალურ რაოდენობას,
რომლებიც უნდა დაიქირაოს საქართველოს ალპინისტთა ფედერაციამ ბარგის ისე გადასატანად, რომ ყველა კონტეინერი სავსე იყოს.
*/
int main() {
    int N, M;
    cin >> M >> N;
    vector <int> dp(M + 1, 1000000), a(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    dp[0] = 0;

    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= N; j++){
            if(i - a[j] >= 0){
                dp[i] = min(dp[i], dp[i - a[j]]);
            }
        }
        dp[i]++;
    }

    cout << (dp[M] >= 1000000 ? -1 : dp[M]);

    return 0;
}
```

---

## Exercise 57

### Problem Description

მოცემულია მთელი რიცხვების N ელემენტიანი მიმდევრიბა. იპოვეთ მოცემული მიმდევრობის უდიდესი მკაცრად ზრდადი ქვემიმდევრობა. პირველ ხაზზე გამობეჭდეთ მიღებული უდიდესი ზრდადი ქვემიმდევრობის სიგრძე. მეორე ხაზზე გამობეჭდეთ მიღებული უდიდესი ზრდადი ქვემიმდევრობის ელემენტები.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია მთელი რიცხვების N ელემენტიანი მიმდევრიბა. იპოვეთ მოცემული მიმდევრობის უდიდესი მკაცრად ზრდადი ქვემიმდევრობა.

პირველ ხაზზე გამობეჭდეთ მიღებული უდიდესი ზრდადი ქვემიმდევრობის სიგრძე.
მეორე ხაზზე გამობეჭდეთ მიღებული უდიდესი ზრდადი ქვემიმდევრობის ელემენტები.
*/

int main() {
    int N;
    cin >> N;
    vector <int> a(N + 1);
    vector <int> dp(N + 1);

    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }

    vector <int> par(N + 1);
    dp[1] = 1;
    par[1] = 1;
    for(int i = 2; i <= N; i++){
        par[i] = i;
        for(int j = i - 1; j >= 1; j--){
            if (a[i] > a[j]){
                if(dp[j] > dp[i]){
                    dp[i] = dp[j];
                    par[i] = j;
                }
            }
        }
        dp[i]++;
    }

    int mx = 1;
    for(int i = 1; i <= N; i++){
        if(dp[mx] < dp[i])
            mx = i;
    }

    cout << dp[mx] << endl;

    vector <int> ans;
    while(mx != par[mx]){
        ans.push_back(a[mx]);
        mx = par[mx];
    }

    ans.push_back(a[mx]);

    for(int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i] << " ";

    return 0;
}
```

---

## Exercise 58

### Problem Description

ფიცარზე წრფივად, ერთ რიგში დაჭედებულია ლურსმნები. შეგვიძლია ნებისმიერი ორი მეზობელი ლურსმანი დავაკავშიროთ ძაფით, რის შემდეგაც ორივე ლურსმანს მობმული ექნება ძაფი, ხოლო დახარჯული ძაფის სიგრძე იქნება ლურსმნებს შორის მანძილი. მინიმუმ რა სიგრძის ძაფის დახარჯვა მოგვიწევს იმისათვის, რომ ყველა ლურსმანს მობმული ჰქონდეს ძაფი.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ფიცარზე წრფივად, ერთ რიგში დაჭედებულია ლურსმნები. შეგვიძლია ნებისმიერი ორი მეზობელი ლურსმანი დავაკავშიროთ ძაფით,
რის შემდეგაც ორივე ლურსმანს მობმული ექნება ძაფი, ხოლო დახარჯული ძაფის სიგრძე იქნება ლურსმნებს შორის მანძილი.
მინიმუმ რა სიგრძის ძაფის დახარჯვა მოგვიწევს იმისათვის, რომ ყველა ლურსმანს მობმული ჰქონდეს ძაფი.
*/


int main() {
    int N;
    cin >> N;
    vector <int> a(N);
    vector <int> dp(N);

    for (int i = 0; i < N; i++){
        cin >> a[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    dp[1] = a[1] - a[0];
    dp[2] = dp[1] + a[2] - a[1];
    for (int i = 3; i < N; i++){
        dp[i] = min(dp[i - 1], dp[i - 2]);
        dp[i] += a[i] - a[i - 1];
    }

    cout << dp[N - 1];

    return 0;
}
```

---

## Exercise 60

### Problem Description

ნიკუშამ სოფელში სხვადასხვა სიმაღლის და 10 სანტიმეტრი სიგანის ფიცრებისგან ღობე გააკეთა და შემდეგ მისი შეღებვა გადაწყვიტა, მაგრამ ერთი უცნაური წესის დაცვით: ის ირჩევს ერთმანეთის მიყოლებით განლაგებულ 5 ფიცარს და ღებავს მათ. ყოველ შემდეგ ჯერზე ის ისევ ირჩევს ერთმანეთის მიყოლებით განლაგებულ შეუღებავ 5 ფიცარს და ღებავს მათ და ასე აგრძელებს მანამ, სანამ შესაძლებელია ამ ოპერაციის გაკეთება. ნიკუშას აინტერესებს, ჯამურად მაქსიმუმ რა ფართობის ღობის შეღებვას მოახერხებს, თუკი ოპტიმალურად იმოქმედებს. ღობე უნდა შეიღებოს მხოლოდ ცალი მხრიდან.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ნიკუშამ სოფელში სხვადასხვა სიმაღლის და 10 სანტიმეტრი სიგანის ფიცრებისგან ღობე გააკეთა და შემდეგ მისი შეღებვა გადაწყვიტა, მაგრამ ერთი უცნაური წესის დაცვით:
 ის ირჩევს ერთმანეთის მიყოლებით განლაგებულ 5 ფიცარს და ღებავს მათ.
 ყოველ შემდეგ ჯერზე ის ისევ ირჩევს ერთმანეთის მიყოლებით განლაგებულ შეუღებავ 5 ფიცარს და ღებავს მათ და ასე აგრძელებს მანამ, სანამ შესაძლებელია ამ ოპერაციის გაკეთება.

ნიკუშას აინტერესებს, ჯამურად მაქსიმუმ რა ფართობის ღობის შეღებვას მოახერხებს, თუკი ოპტიმალურად იმოქმედებს.
 ღობე უნდა შეიღებოს მხოლოდ ცალი მხრიდან.
*/

int main() {
    int N;
    cin >> N;
    vector <long long> a(N + 1), dp(N + 1);

    for(int i = 1; i <= N; i++)
        cin >> a[i];

    if(N < 5){
        cout << 0;
        return 0;
    }

    dp[1] = 0;
    dp[2] = 0;
    dp[3] = 0;
    dp[4] = 0;
    dp[5] = (a[1] + a[2] + a[3] + a[4] + a[5]) * 10;

    for(int i = 6; i <= N; i++){
        dp[i] = max(dp[i - 1], dp[i - 5] +
                     (a[i - 4] + a[i - 3] + a[i - 2] + a[i - 1] + a[i]) * 10
                    );
    }

    cout << dp[N];

    return 0;
}
```

---

## Exercise 61

### Problem Description

ერთ კვადრატულ ქვეყანაში ცხოვრობდნენ კვადრატული ადამიანები და ყველაფერი დანარჩენიც იყო კვადრატული. ამრიგად, კვადრატულმა პარლამენტმა მიიღო კვადრატული მიწის კანონი. ამ კანონის თანახმად, ადამიანს შეეძლო მხოლოდ კვადრატული მიწის შეძენა. კვადრატული მიწის სიგრძეც და სიგანეც უნდა ყოფილიყო მთელი დადებითი რიცხვები. თუ კვადრატული ადამიანი შეიძენდა მიწას, რომლის სიგრძეც იყო a მეტრი, მაშინ ის გადაიხდიდა a2 კვადრს. სანდრომ, რომელიც კვადრატული ქვეყნის მოქალაქეა, გადაწყვიტა მთელი მისი N კვადრით ეყიდა მიწა. მას რა თქმა უნდა შეეძლო 1x1 ზომის მიწის ყიდვა, მაგრამ მას სურს, რომ მის მიერ ნაყიდი მიწების რაოდენობა რაც შეიძლება ცოტა გამოვიდეს. სანდრომ დახმარებისთვის თქვენ მოგმართათ, დაეხმარეთ მას და უთხარით თუ მინიმუმ რამდენი მიწის ყიდვა მოუწევს a კვადრით, ცხადია ფული ბოლომდე უნდა დაიხარჯოს.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Dynamic Programming
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ერთ კვადრატულ ქვეყანაში ცხოვრობდნენ კვადრატული ადამიანები და ყველაფერი დანარჩენიც იყო კვადრატული. ამრიგად, კვადრატულმა პარლამენტმა მიიღო კვადრატული მიწის კანონი.
ამ კანონის თანახმად, ადამიანს შეეძლო მხოლოდ კვადრატული მიწის შეძენა. კვადრატული მიწის სიგრძეც და სიგანეც უნდა ყოფილიყო მთელი დადებითი რიცხვები.
თუ კვადრატული ადამიანი შეიძენდა მიწას, რომლის სიგრძეც იყო a მეტრი, მაშინ ის გადაიხდიდა a2 კვადრს.

სანდრომ, რომელიც კვადრატული ქვეყნის მოქალაქეა, გადაწყვიტა მთელი მისი N კვადრით ეყიდა მიწა.
მას რა თქმა უნდა შეეძლო 1x1 ზომის მიწის ყიდვა, მაგრამ მას სურს, რომ მის მიერ ნაყიდი მიწების რაოდენობა რაც შეიძლება ცოტა გამოვიდეს.

სანდრომ დახმარებისთვის თქვენ მოგმართათ, დაეხმარეთ მას და უთხარით თუ მინიმუმ რამდენი მიწის ყიდვა მოუწევს a კვადრით, ცხადია ფული ბოლომდე უნდა დაიხარჯოს.
*/

int main() {
    int N;
    cin >> N;
    vector <int> a;

    for(int i = 1; i * i <= N; i++)
        a.push_back(i * i);

    vector <int> dp(N + 1);

    for(int i = 1; i <= N; i++){
        dp[i] = dp[i - 1] + 1;
        for(int j = 1; j <= a.size(); j++){
            if(a[j] > i) break;
            dp[i] = min(dp[i], dp[i - a[j]] + 1);
        }
    }

    cout << dp[N];
    return 0;
}
```

---

## Exercise 63

### Problem Description

პატარა ბაბის (ბაბი ბაჭიაა) დაბადების დღეზე კონვერტით ერთი სიმბოლო აჩუქეს. ბაბის ძალიან უნდა, ეს სიმბოლო ციფრი რომ არ აღმოჩნდეს, რადგან ბაჭიებს, საერთოდ არითმეტიკა არ უყვართ. თქვენმა პროგრამამ უნდა გაარკვიოს, არის თუ არა ბაბის სიმბოლო ციფრი.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
პატარა ბაბის (ბაბი ბაჭიაა) დაბადების დღეზე კონვერტით ერთი სიმბოლო აჩუქეს. ბაბის ძალიან უნდა, ეს სიმბოლო ციფრი რომ არ აღმოჩნდეს, რადგან ბაჭიებს, საერთოდ არითმეტიკა არ უყვართ.
თქვენმა პროგრამამ უნდა გაარკვიოს, არის თუ არა ბაბის სიმბოლო ციფრი.
*/

int main() {
    char sym;
    cin >> sym;

    if((int)sym < 48 || (int)sym > 57)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}
```

---

## Exercise 64

### Problem Description

მოცემულია ლათინური ანბანის პატარა სიმბოლო. საჭიროა მისი გამთავრულება.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია ლათინური ანბანის პატარა სიმბოლო. საჭიროა მისი გამთავრულება.
*/

int main() {
    char sym;
    cin >> sym;

    sym -= 32;

    cout << (char)sym;
    return 0;
}

```

---

## Exercise 65

### Problem Description

მოცემულია ლათინური ანბანის რამდენიმე სიმბოლო. საჭიროა მათი რეგისტრის შეცვლა. ანუ, თუ სიმბოლო მთავრულია, უნდა დაპატარავდეს, და პირიქით, თუ პატარა ასოა, უნდა გამთავრულდეს.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია ლათინური ანბანის რამდენიმე სიმბოლო. საჭიროა მათი რეგისტრის შეცვლა.
//ანუ, თუ სიმბოლო მთავრულია, უნდა დაპატარავდეს, და პირიქით, თუ პატარა ასოა, უნდა გამთავრულდეს.

int main() {
    int N;
    cin >> N;

    char sym;
    for(int i = 0; i < N; i++){
        cin >> sym;
        if((int)sym >= 65 && 90 >= (int)sym){
            cout << (char)(sym + 32) << endl;
        }else{
            cout << (char)(sym - 32) << endl;
        }
    }

    return 0;
}
```

---

## Exercise 66

### Problem Description

მოცემულია ლათინური ანბანის მთავრული სიმბოლოების მიმდევრობა. საჭიროა თითოეული მათგანის ნაცვლად ჩავწეროთ მისი შესაბამისი პატარა სიმბოლო.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
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

```

---

## Exercise 67

### Problem Description

მოცემულია ინგლისური ანბანის პატარა სიმბოლო. დაადგინეთ მერამდენე ადგილი უკავია მოცემულ სიმბოლოს ინგლისურ ანბანში.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია ინგლისური ანბანის პატარა სიმბოლო. დაადგინეთ მერამდენე ადგილი უკავია მოცემულ სიმბოლოს ინგლისურ ანბანში.

int main() {
    char c;
    cin >> c;

    int place = (((int)c) % 71 - 26) + 1;

    cout << place;

    return 0;
}
```

---

## Exercise 68

### Problem Description

მოცემულია ლათინური ანბანის ორი მთავრული ასო. საჭიროა დაიბეჭდოს ყველა სიმბოლო პირველი ასოდან მეორეს ჩათვლით, ანბანის მიხედვით, თანმიმდევრობით.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია ლათინური ანბანის ორი მთავრული ასო. საჭიროა დაიბეჭდოს ყველა სიმბოლო პირველი ასოდან მეორეს ჩათვლით, ანბანის მიხედვით, თანმიმდევრობით.

int main() {
    char fir, sec;
    cin >> fir >> sec;

    if((int)fir < (int)sec){
        for(int i = (int)fir; i <= (int)sec; i++){
            char ch = i;
            cout << ch << " ";
        }
    }else{
         for(int i = (int)fir; i >= (int)sec; i--){
            char ch = i;
            cout << ch << " ";
        }
    }

    return 0;
}
```

---

## Exercise 69

### Problem Description

პატარა თამაზს ძალიან უყვარს მათემატიკა და ხშირად ის უცნაურ შეჯიბრებებს აწყობს ხოლმე რიცხვებს შორის. დღეს ჩვენმა პატარა მათემატიკოსმა ფურცელზე ზედმეტი ფიქრის გარეშე რაღაც რიცხვი დაწერა. ახლა კი სურს ერთმანეთს კენტი და ლუწი ციფრები შეაჯობროს. თამაშის წესები ასეთია: თუ ფურცელზე დაწერილ რიცხვში ლუწი ციფრების რაოდენობა მეტია კენტი ციფრების რაოდენობაზე, მაშინ ლუწები იგებენ, თუ კენტები მეტია ლუწებზე, მაშინ კენტები იგენებ, ხოლო თუ ტოლია - მაშინ ფრეა.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
პატარა თამაზს ძალიან უყვარს მათემატიკა და ხშირად ის უცნაურ შეჯიბრებებს აწყობს ხოლმე რიცხვებს შორის.
დღეს ჩვენმა პატარა მათემატიკოსმა ფურცელზე ზედმეტი ფიქრის გარეშე რაღაც რიცხვი დაწერა. ახლა კი სურს ერთმანეთს კენტი და ლუწი ციფრები შეაჯობროს.

თამაშის წესები ასეთია: თუ ფურცელზე დაწერილ რიცხვში ლუწი ციფრების რაოდენობა მეტია კენტი ციფრების რაოდენობაზე, მაშინ ლუწები იგებენ,
თუ კენტები მეტია ლუწებზე, მაშინ კენტები იგენებ, ხოლო თუ ტოლია - მაშინ ფრეა.
*/

int main() {
    string num;
    cin >> num;

    vector <char> even, odd;
    for(int i = 0; i <= num.size() - 1 ; i++){
        if((int)num[i] % 2 == 0)
            even.push_back(num[i]);
        else
            odd.push_back(num[i]);
    }

    if(even.size() > odd.size()){
        cout << "Even";
    }else{
        if(even.size() < odd.size()){
            cout << "Odd";
        }else{
            cout << "Draw";
        }
    }

    return 0;
}
```

---

## Exercise 70

### Problem Description

პირველკლასელს აქვს სტრიქონი, რომელშიც ერთნიშნა რიცხვების ჯამი ან სხვაობაა ჩაწერილი. მაგ.: 2+3, ან 5-7. ანუ სტრიქონი შედგება სამი სიმბოლოსაგან, რომელთაგან პირველი და ბოლო აუცილებლად ციფრია, ხოლო შუა სიმბოლო წარმოადგენს '+' ან '-' სიმბოლოს (აპოსტროფების გარეშე). დაეხმარეთ პირველკლასელს და დაუწერეთ პროგრამა, რომელიც იანგარიშებს მოცემული სტრიქონის რიცხვით მნიშვნელობას.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
პირველკლასელს აქვს სტრიქონი, რომელშიც ერთნიშნა რიცხვების ჯამი ან სხვაობაა ჩაწერილი. მაგ.: 2+3, ან 5-7.
ანუ სტრიქონი შედგება სამი სიმბოლოსაგან, რომელთაგან პირველი და ბოლო აუცილებლად ციფრია, ხოლო შუა სიმბოლო წარმოადგენს '+' ან '-' სიმბოლოს (აპოსტროფების გარეშე).
დაეხმარეთ პირველკლასელს და დაუწერეთ პროგრამა, რომელიც იანგარიშებს მოცემული სტრიქონის რიცხვით მნიშვნელობას.
*/

int main() {
    string str;
    cin >> str;

    int res = 0;
    if(str[1] == '+'){
        res = (str[0] - '0') + (str[2] - '0');
    }else{
        res = (str[0] - '0') - (str[2] - '0');
    }

    cout << res;

    return 0;
}
```

---

## Exercise 71

### Problem Description

მოცემულია მრავალნიშნა რიცხვი, რომლის ციფრების რაოდენობა არ აღემატება 500 სიმბოლოს. დაწერეთ პროგრამა, რომელიც გამოთვლის მოცემული რიცხვის ციფრების ჯამს

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
მოცემულია მრავალნიშნა რიცხვი, რომლის ციფრების რაოდენობა არ აღემატება 500 სიმბოლოს.
დაწერეთ პროგრამა, რომელიც გამოთვლის მოცემული რიცხვის ციფრების ჯამს
*/

int main() {
    string str;
    cin >> str;

    int res = 0;
    for(int i = 0 ; i < str.size(); i++){
        res += (str[i] - '0');
    }

    cout << res;
    return 0;
}


```

---

## Exercise 72

### Problem Description

მოცემულია ინგლისური სიმბოლოებით შედგენილი სტრიქონი S და სეგმენტის საზღვრები l და r. S-ში შეაბრუნეთ [l,r] სეგმენტი და გამოიტანეთ მიღებული სტრიქონი.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია ინგლისური სიმბოლოებით შედგენილი სტრიქონი S და სეგმენტის საზღვრები l და r. S-ში შეაბრუნეთ [l,r] სეგმენტი და გამოიტანეთ მიღებული სტრიქონი.

int main() {
    string str;
    cin >> str;
    int l, r;
    cin >> l >> r;

    vector <char> segment;

    for(int i = l - 1; i < r; i++){
        segment.push_back(str[i]);
    }

    if(l == r){
        cout << str;
        exit(0);
    }

    reverse(segment.begin(), segment.end());

    for(int i = l - 1; i < r; i++){
        if(l - 1 > 0){
            str[i] = segment[i - 1];
        }else{
            str[i] = segment[i];
        }
    }

    cout << str;

    return 0;
}
```

---

## Exercise 73

### Problem Description

ათობით რიცხვს ეწოდება ათობით-ორობითი რიცხვი, თუ ის შედგება მხოლოდ 0 და 1 ციფრებისგან. მაგალითად: 10 და 1101 ათობით-ორობითია, ხოლო 112 და 3001 არა. მოცემულია N დადებითი ათობითი რიცხვი, გამობეჭდეთ მინიმალური რაოდენობა ათობით-ორობითი რიცხვებისა, რომელთა ჯამიც იქნება N−ის ტოლი. ათობით-ორობითი რიცხვი შესაძლოა 0-თაც იწყებოდეს. მაგალითად: 000101 ვალიდური ათობით-ორობითი რიცხვია.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ათობით რიცხვს ეწოდება ათობით-ორობითი რიცხვი, თუ ის შედგება მხოლოდ 0 და 1 ციფრებისგან. მაგალითად: 10 და 1101 ათობით-ორობითია, ხოლო 112 და 3001 არა.

მოცემულია N დადებითი ათობითი რიცხვი, გამობეჭდეთ მინიმალური რაოდენობა ათობით-ორობითი რიცხვებისა, რომელთა ჯამიც იქნება N−ის ტოლი.

ათობით-ორობითი რიცხვი შესაძლოა 0-თაც იწყებოდეს. მაგალითად: 000101 ვალიდური ათობით-ორობითი რიცხვია.
*/

int main() {
    string str;
    cin >> str;
    int mx = 0;

    for(int i = 0; i< str.size(); i++){
        mx = max(mx, (str[i] - '0'));
    }

    cout << mx;

    return 0;
}
```

---

## Exercise 74

### Problem Description

ორობით რიცხვში "შემოსაზღვრული სივრცე" ვუწოდოთ ნულების ერთობლიობას, რომელსაც თავში და ბოლოში ერთიანები ესაზღვრება. თქვენი მიზანია მოცემულ ორიბით რიცხვში იპოვოთ უდიდესი შემოსაზღვრული სივრცის სიგრძე.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
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
```

---

## Exercise 75

### Problem Description

მოცემულია წინადადება, რომლის სიტყვებს შორის ზედმეტი ჰარებია. დაწერეთ პროგრამა, რომელიც წაშლის ზედმეტ ჰარებს.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
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
```

---

## Exercise 76

### Problem Description

მოცემულია ერთმანეთისაგან ჰარით გამოყოფილი ორი სიტყვა - ადამიანის სახელი და გვარი.საჭიროა ამ ადამიანის ინიციალების გამოტანა.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია ერთმანეთისაგან ჰარით გამოყოფილი ორი სიტყვა - ადამიანის სახელი და გვარი.საჭიროა ამ ადამიანის ინიციალების გამოტანა.

int main() {
    string name, surname;
    cin >> name >> surname;

    string str = name + ' ' + surname;
    for(int i = 0; i < str.size() - 1; i++){
        if(str[i] == ' '){
            cout << str[0] << '.' << ' ' << str[i + 1] << '.';
            exit(0);
        }
    }

    return 0;
}
```

---

## Exercise 77

### Problem Description

მოცემულია ორი სტრიქონი. ორივე მათგანი შედგება ინგლისური ანბანის პატარა სიმბოლოებისგან. შეადარეთ შემოსული სტრიქონები ლექსიკოგრაფიულად.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(1)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია ორი სტრიქონი. ორივე მათგანი შედგება ინგლისური ანბანის პატარა სიმბოლოებისგან. შეადარეთ შემოსული სტრიქონები ლექსიკოგრაფიულად.

int main() {
    string a, b;
    cin >> a >> b;

    if(a > b)
        cout << ">";
    else if(a < b)
            cout << "<";
        else if(a == b)
            cout << "=";

    return 0;
}
```

---

## Exercise 78

### Problem Description

მოცემულია ორი რიცხვი. შეადარეთ ისინი ერთმანეთს.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია ორი რიცხვი. შეადარეთ ისინი ერთმანეთს.

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    if(a.size() > b.size()){
        cout << ">";
    }else{
        if(a.size() < b.size()){
            cout << "<";
        }else{
            for(int i = 0; i < a.size(); i++){
                if(a[i] > b[i]){
                    cout << ">";
                    exit(0);
                }else{
                    if(a[i] < b[i]){
                        cout << "<";
                        exit(0);
                    }
                }
            }
            cout << "=";
        }
    }
    return 0;
}
```

---

## Exercise 79

### Problem Description

მეორეკლასელებს დიდი არითმეტიკული გამოსახულება აქვთ. სად იპოვეს, ან ვინ მისცათ, უცნობია, მაგრამ ცნობილია, რომ გამოსახულება შეიცავს ფრჩხილებსაც. მეორეკლასელებს აინტერესებთ (!!!), სწორადაა თუ არა ფრჩხილები ჩაწერილი ამ გამოსახულებაში, ამ მიზნით ამოშალეს ყველა სხვა სიმბოლო და დატოვეს მხოლოდ ფრჩხილები (ყველა ფრჩხილი მრგვალია), ამის შემდეგ მოიტანეს ჩვენთან შესამოწმებლად. რადგან მიღებული სტრიქონი საკმაოდ დიდია (500 სიმბოლომდე), ამიტომაც უმჯობესია პროგრამის დაწერა, რომელიც შეამოწმებს ფრჩხილების სისწორეს. ცნობილია, რომ: 1. () ეს გამოსახულება სწორია; 2. ორი სწორი გამოსახულების ერთმანეთზე გადაბმით (ნებისმიერი თანმიმდევრობით) მიიღება სწორი გამოსახულება; 3. თუ ნებისმიერ სწორ გამოსახულებას ჩავსვამთ მრგვალ ფრჩხილებში, მიიღება სწორი გამოსახულება. მეორეკლასელების გამოსახულება შეიცავს მხოლოდ მრგვალ ფრჩხილებს.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
მეორეკლასელებს დიდი არითმეტიკული გამოსახულება აქვთ. სად იპოვეს, ან ვინ მისცათ, უცნობია, მაგრამ ცნობილია, რომ გამოსახულება შეიცავს ფრჩხილებსაც.

მეორეკლასელებს აინტერესებთ (!!!), სწორადაა თუ არა ფრჩხილები ჩაწერილი ამ გამოსახულებაში, ამ მიზნით ამოშალეს ყველა სხვა სიმბოლო და დატოვეს მხოლოდ ფრჩხილები (ყველა ფრჩხილი მრგვალია),
 ამის შემდეგ მოიტანეს ჩვენთან შესამოწმებლად.

რადგან მიღებული სტრიქონი საკმაოდ დიდია (500 სიმბოლომდე), ამიტომაც უმჯობესია პროგრამის დაწერა, რომელიც შეამოწმებს ფრჩხილების სისწორეს.

ცნობილია, რომ:
1. () ეს გამოსახულება სწორია;
2. ორი სწორი გამოსახულების ერთმანეთზე გადაბმით (ნებისმიერი თანმიმდევრობით) მიიღება სწორი გამოსახულება;
3. თუ ნებისმიერ სწორ გამოსახულებას ჩავსვამთ მრგვალ ფრჩხილებში, მიიღება სწორი გამოსახულება.

მეორეკლასელების გამოსახულება შეიცავს მხოლოდ მრგვალ ფრჩხილებს.
*/

int main() {
    string str;
    cin >> str;

    int cnt = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '(')
            cnt++;
        else cnt--;

        if(cnt < 0){
            cout << "NO";
            exit(0);
        }
    }
    cout << (cnt ? "NO" : "YES");

    return 0;
}
```

---

## Exercise 80

### Problem Description

მოცემულია მთელი რიცხვებისგან შედგენილი მასივი. დაადგინეთ, შეიცავს თუ არა შემოსული მასივი x-ს. მასივი დალაგებულია ზრდადობით

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია მთელი რიცხვებისგან შედგენილი მასივი. დაადგინეთ, შეიცავს თუ არა შემოსული მასივი x-ს.
// მასივი დალაგებულია ზრდადობით

int main(){
    int N, x;
    cin >> N >> x;
    int a[N];

    for(int i = 0; i < N; i++)
        cin >> a[i];

    for(int i = 0; i < N; i++){
        if(a[i] == x){
            cout << "YES";
            break;
        }
        else{
         if(i == N - 1){
            cout << "NO";
            break;
         }
        }
    }

    return 0;
}




```

---

## Exercise 81

### Problem Description

მოცემულია მთელი რიცხვებისგან შედგენილი ორი მასივი a და b. დაადგინეთ, b მასივის რომელ წევრებს შეიცავს a მასივი. a მასივი დალაგებულია ზრდადობით

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*მოცემულია მთელი რიცხვებისგან შედგენილი ორი მასივი a და b. დაადგინეთ, b მასივის რომელ წევრებს შეიცავს a მასივი.
a მასივი დალაგებულია ზრდადობით*/

int main() {
    int a;
    cin >> a;
    vector <int> arr(a);
    for(int i = 0; i < a; i++)
        cin >> arr[i];

    int b;
    cin >> b;
    vector <int> brr(b);
    for(int i = 0; i < b; i++)
        cin >> brr[i];


    int l, r, m, x;
    for(int i = 0; i < b; i++){
        x = brr[i];
        l = 0;
        r = a - 1;
        while(l < r){
            m = (l + r) / 2;
            if(x <= arr[m]){
                r = m;
            }else l = m + 1;
        }
        if(arr[l] == x){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}
```

---

## Exercise 82

### Problem Description

მოცემულია n ელემენტიანი მასივი a1,a2,...,an. აგრეთვე მოცემულია ნატურალური რიცხვი s. დაადგინეთ არსებობს თუ არა მასივში ორი ელემენტი ისეთი, რომ მათი ჯამი იყოს s. sort

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Sorting
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია n ელემენტიანი მასივი a1,a2,...,an. აგრეთვე მოცემულია ნატურალური რიცხვი s. დაადგინეთ არსებობს თუ არა მასივში ორი ელემენტი ისეთი, რომ მათი ჯამი იყოს s.

int main() {
    long long n, s;
    cin >> n >> s;
    vector <long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //sort
   sort(arr.begin(), arr.end());

    long long l, r, m, x;

    for(int i = 0; i < n; i++){
        if(s < arr[i]) continue;
        x = s - arr[i];

        l = i + 1;
        r = n;
        while(l < r){
            m = (l + r) / 2;
            if(x <= arr[m]){
                r = m;
            }else{
                l = m + 1;
            }
        }

        if(arr[l] == x){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";


    return 0;
}
```

---

## Exercise 83

### Problem Description

სტრიქონი შედგება მხოლოდ ლათინური ანბანის პატარა ასოებისაგან. პატარა თარაშმა დააპირა სტრიქონის სიგრძის შემცირება შემდეგი წესით: თუ სტრიქონში ერთმანეთის მიყოლებით 2 ზე მეტი ერთი და იგივე სიმბოლოა, მაშინ პატარა თარაში მათ ნაცვლად წერს სიმბოლოთა რაოდენობას და თვით ამ სიმბოლოს. პატარა თარაში ახლა აპირებს შესაბამისი პროგრამის შექმნას სტრიქონების დასაშიფრად. ბუნებრივია, ამაში თქვენ უნდა დაეხმაროთ.

### Algorithm/Data Structure Concepts

- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
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
```

---

## Exercise 84

### Problem Description

მოცემულია არაკლებადი თანმიმდევრობით დალაგებული N ელემენტიანი a მიმდევრობა. თქვენი დავალებაა მოცემულ მიმდევრობაში იპოვოთ x-თან უახლოესი ელემენტი (თუ ასეთი რამდენიმეა, აირჩიეთ მათგან მინიმალური).

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

//მოცემულია არაკლებადი თანმიმდევრობით დალაგებული N ელემენტიანი a მიმდევრობა.
//თქვენი დავალებაა მოცემულ მიმდევრობაში იპოვოთ x-თან უახლოესი ელემენტი (თუ ასეთი რამდენიმეა, აირჩიეთ მათგან მინიმალური).

int main() {
    int N, Q;
    cin >> N >> Q;
    vector <int> a(N + 1);

    for (int i = 1; i <= N; i++)
        cin >> a[i];

    int l, r, m, x;
    for (int i = 1; i <= Q; i++){
        cin >> x;

        l = 1;
        r = N;
        while(l < r){
            m = (l + r) / 2;
            if (a[m] < x){
                l = m + 1;
            }else {
                r = m;
            }
        }

        if (a[l] == x || l == 1){
            cout << a[l] << " ";
        }else {
            if (x - a[l - 1] <= a[l] - x){
                cout << a[l - 1] << " ";
            }else cout << a[l] << " ";
        }
    }
    return 0;
}
```

---

## Exercise 86

### Problem Description

რიცხვის კეთილი მეზობელი ეწოდება ისეთ რიცხვს, რომელიც მკაცრად მეტია მოცემულ რიცხვზე და არის მარტივი. თქვენი მიზანია მოცემული T რაოდენობის რიცხვისთვის იპოვოთ და დაბეჭდოთ მათი კეთილი მეზობლები.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Prime Numbers
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*რიცხვის კეთილი მეზობელი ეწოდება ისეთ რიცხვს, რომელიც მკაცრად მეტია მოცემულ რიცხვზე და არის მარტივი. თქვენი მიზანია მოცემული T
 რაოდენობის რიცხვისთვის იპოვოთ და დაბეჭდოთ მათი კეთილი მეზობლები.*/

int main() {
    int T, x;
    cin >> T;

    vector <int> primes;
    primes.push_back(2);
    for(int i = 3; i <= 1000003; i+=2){
        bool isPrime = true;
        int sqr = sqrt(i);
        for(int j = 3; j <= sqr; j+=2){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            primes.push_back(i);
    }

    for(int i = 1; i <= T; i++){
        cin >> x;
        int l = 0, r = primes.size() - 1, m;
        while(l < r){
            m = (l + r) / 2;
            if(primes[m] < x){
                l = m + 1;
            }else r = m;
        }
        if(primes[l] == x) l++;
        cout << primes[l] << endl;
    }

    return 0;
}
```

---

## Exercise 87

### Problem Description

ლათინური სიმბოლოებით ჩაწერილ წინადადებას ეწოდება ლამაზი, თუკი მისი ყველა სიტყვა მთავრული ასოთი იწყება, ხოლო ყველა დანარჩენი ასო არამთავრულია. მოცემულია მხოლოდ ლათინური ანბანის სიმბოლოებით ჩაწერილი წინადადება, დაწერეთ პროგრამა, რომელიც გაალამაზებს მას.

### Algorithm/Data Structure Concepts

- Basic Programming

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ლათინური სიმბოლოებით ჩაწერილ წინადადებას ეწოდება ლამაზი, თუკი მისი ყველა სიტყვა მთავრული ასოთი იწყება, ხოლო ყველა დანარჩენი ასო არამთავრულია.
მოცემულია მხოლოდ ლათინური ანბანის სიმბოლოებით ჩაწერილი წინადადება, დაწერეთ პროგრამა, რომელიც გაალამაზებს მას.
*/

int main() {
    string str;
    getline(cin, str);

    string newStr;
    if((int)str[0] > 96){
        newStr += str[0] - 32;
    }else{
        newStr += str[0];
    }

    for(int i = 1; i <= str.size(); i++){
        if(str[i] != ' ' && str[i - 1] != ' ' && str[i] < 96){
            newStr += (int)str[i] + 32;
        }else{
            if(str[i - 1] == ' ' && str[i] > 96){
                newStr += str[i] - 32;
            }else{
                newStr += str[i];
            }
        }
    }

    cout << newStr;

    return 0;
}
```

---

## Exercise 88

### Problem Description

ასტერიქსი და ობელიქსი გალის მცხოვრებლები არიან. ისინი ძალიან ძლიერი ბიჭები არიან და ეს იმის დამსახურებაა, რომ მათ უზომოდ ბევრის ჭამა უყვართ. ერთ დღესაც ობელიქსმა გადაწყვიტა ასტერიქსი ტორტების სახლში, გურმანში წაეყვანა. შემდეგ მოილაპარაკეს, რომ სულ ჯამურად N ცალ ტორტს შეჭამდნენ (შესაძლოა ერთ-ერთმა მათგანმა საერთოდ არ ჭამოს ტორტი). თუმცა ამავდროულად მეგობრებს სურთ, რომ რაც შეიძლება მალე მოამთავრონ ტორტების ჭამა. ვიცით, რომ ასტერიქსს ერთი ტორტის სრულად გადასანსლვა a წამში შეუძლია, ხოლო ობელიქსს - b წამში. დაეხმარეთ ასტერიქსს და ობელიქსს გაარკვიონ, მინიმუმ რამდენ წამში შეძლებენ ისინი N ცალი ტორტის შეჭმას. პ. ს. გურმანში ტორტების ულიმიტო რაოდენობა აქვთ...

### Algorithm/Data Structure Concepts

- Recursion

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(1)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ასტერიქსი და ობელიქსი გალის მცხოვრებლები არიან. ისინი ძალიან ძლიერი ბიჭები არიან და ეს იმის დამსახურებაა, რომ მათ უზომოდ ბევრის ჭამა უყვართ.

ერთ დღესაც ობელიქსმა გადაწყვიტა ასტერიქსი ტორტების სახლში, გურმანში წაეყვანა. შემდეგ მოილაპარაკეს, რომ სულ ჯამურად N
 ცალ ტორტს შეჭამდნენ (შესაძლოა ერთ-ერთმა მათგანმა საერთოდ არ ჭამოს ტორტი). თუმცა ამავდროულად მეგობრებს სურთ, რომ რაც შეიძლება მალე მოამთავრონ ტორტების ჭამა.
ვიცით, რომ ასტერიქსს ერთი ტორტის სრულად გადასანსლვა a წამში შეუძლია, ხოლო ობელიქსს - b წამში.

დაეხმარეთ ასტერიქსს და ობელიქსს გაარკვიონ, მინიმუმ რამდენ წამში შეძლებენ ისინი N ცალი ტორტის შეჭმას.

პ. ს. გურმანში ტორტების ულიმიტო რაოდენობა აქვთ...
*/

int main() {
    long long N, a, b;
    cin >> N >> a >> b;

    long long x, l, r, m, cks;
    l = 0;
    r = min(a, b) * N;
    while(l < r){
        m = (l + r) / 2;
        cks = m/a + m/b;
        if(cks < N){
            l = m + 1;
        }else r = m;
    }

    cout << l;
    return 0;
}

```

---

## Exercise 89

### Problem Description

ქალაქ ჩეს ცენტრში საფეხმავლო ქუჩაა - მოსეირნეთა ერთ-ერთი ყველაზე პოპულარული ადგილი. აქ სეირნობა ძალიან სასიამოვნოა, რადგან ამ ქუჩაზე  n  ცალი საინტერესო ძეგლია. გოგონას თავისი ორი სკოლელი ვაჟი მოსწონს, მაგრამ მათ შორის არჩევანს ვერ აკეთებს. ბოლოს გადაწყვიტა, ორივესთვის ერთსა და იმავე დროს დაენიშნა შეხვედრა, გოგონას უნდა ორი ძეგლის არჩევა, სადაც ბიჭები დაელოდებიან. ამასთან ეს ძეგლები ისეთი უნდა იყოს, რომ ბიჭებმა ერთმანეთი ვერ შენიშნონ. ნისლის გამო ბიჭები ერთმანეთს დაინახავენ მხოლოდ იმ შემთხვევაში, თუ მათ შორის მანძილი არ აღემატება r მეტრს. გოგონას აინტერესებს, ორი ძეგლის არჩევის რამდენი ვარიანტი აქვს მას.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
ქალაქ ჩეს ცენტრში საფეხმავლო ქუჩაა - მოსეირნეთა ერთ-ერთი ყველაზე პოპულარული ადგილი. აქ სეირნობა ძალიან სასიამოვნოა, რადგან ამ ქუჩაზე  n  ცალი საინტერესო ძეგლია.

გოგონას თავისი ორი სკოლელი ვაჟი მოსწონს, მაგრამ მათ შორის არჩევანს ვერ აკეთებს.
ბოლოს გადაწყვიტა, ორივესთვის ერთსა და იმავე დროს დაენიშნა შეხვედრა, გოგონას უნდა ორი ძეგლის არჩევა, სადაც ბიჭები დაელოდებიან.
ამასთან ეს ძეგლები ისეთი უნდა იყოს, რომ ბიჭებმა ერთმანეთი ვერ შენიშნონ. ნისლის გამო ბიჭები ერთმანეთს დაინახავენ მხოლოდ იმ შემთხვევაში, თუ მათ შორის მანძილი არ აღემატება r მეტრს.

გოგონას აინტერესებს, ორი ძეგლის არჩევის რამდენი ვარიანტი აქვს მას.
*/

int main() {
    long long n, v;
    cin >> n >> v;
    vector <long long> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    long long l, r, m, x, cnt = 0;

    for(int i = 1; i <= n; i++){
        x = a[i] + v + 1;
        l = 1;
        r = n;

        while(l < r){
            m = (l + r) / 2;
            if(a[m] < x){
                l = m + 1;
            }else r = m;
        }
        if(a[l] >= x)
            cnt += n - l + 1;
    }

    cout << cnt;
    return 0;
}
```

---

## Exercise 90

### Problem Description

პატარა ბეკიმ ახლახანს ისწავლა რიცხვები და მათი უსასრულო მიმდევრობის დაწერა დაიწყო. მიმდევრობას შემდეგი სახე აქვს 1234567891011... ბეკის მეგობარი ნეკი ზედმეტად ცნობისმოყვარეა და მას აინტერესებს რა ციფრი წერია k ინდექსზე. ასეთ ერთ შეკითხვას ბეკიმ თავი მარტივად გაართვა, მაგრამ ნეკიმ T რაოდენობის შეკითხვაზე პასუხის გაგება მოინდომა. დაეხმარეთ ბეკის გასცეს პასუხი ნეკის ყველა შეკითხვას.

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Recursion
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
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
```

---

## Exercise 91

### Problem Description

საქართველოში ინტერნეტის ხარისხის გაუმჯობესების მიზნით 5G ანძების დამონტაჟება იწყება. ტენდერში ერთ-ერთმა რეიტინგულმა კომპანიამ, "AIA-BUILDING"-მა გაიმარჯვა. პროექტის დაგეგმარებისას გადაწყდა, რომ ანძები ქვეყანაში წრფივად უნდა განთავსდეს, თანაც ისე, რომ გვერდიგვერდ მდგომი ანძები რაც შეიძლება შორს იყოს ერთმანეთისგან, რათა უფრო დიდი ტერიტორია დაიფაროს 5G ინტერნეტით. რუკაზე წრფივად მოინიშნა N ადგილი, სადაც შესაძლებელია ანძის დამონტაჟება. ქვეყანაში სულ K ანძა უნდა დაყენდეს. თქვენ ამავე კომპანიის პროგრამისტი ხართ და დაგევალათ შეარჩიოთ რუკაზე აღნიშნული N წერტილიდან ისეთი K ცალი წერტილი, რომ გვერდიგვერდ მდგომ ანძებს შორის მინიმალური დაშორება გამოვიდეს რაც შეიძლება დიდი (მაქსიმალური).

### Algorithm/Data Structure Concepts

- Dynamic Array (vector)
- Sorting
- Nested Loops

### Complexity Analysis

- **Time Complexity:** O(n²)
- **Space Complexity:** O(n)

### Solution

**Language:** C++

```cpp
#include <bits/stdc++.h>

using namespace std;

/*
საქართველოში ინტერნეტის ხარისხის გაუმჯობესების მიზნით 5G ანძების დამონტაჟება იწყება. ტენდერში ერთ-ერთმა რეიტინგულმა კომპანიამ, "AIA-BUILDING"-მა გაიმარჯვა.
პროექტის დაგეგმარებისას გადაწყდა, რომ ანძები ქვეყანაში წრფივად უნდა განთავსდეს, თანაც ისე, რომ გვერდიგვერდ მდგომი ანძები რაც შეიძლება შორს იყოს ერთმანეთისგან,
რათა უფრო დიდი ტერიტორია დაიფაროს 5G ინტერნეტით.

რუკაზე წრფივად მოინიშნა N ადგილი, სადაც შესაძლებელია ანძის დამონტაჟება. ქვეყანაში სულ K ანძა უნდა დაყენდეს.
თქვენ ამავე კომპანიის პროგრამისტი ხართ და დაგევალათ შეარჩიოთ რუკაზე აღნიშნული N წერტილიდან ისეთი K
 ცალი წერტილი, რომ გვერდიგვერდ მდგომ ანძებს შორის მინიმალური დაშორება გამოვიდეს რაც შეიძლება დიდი (მაქსიმალური).
*/

int main() {
    unsigned long long N, K;
    cin >> N >> K;
    vector <unsigned long long> a(N + 1);
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }

    sort(a.begin() + 1, a.end());

    unsigned long long l = 1, r = a[N] - a[1], m, ans = 1;
    while(l <= r){
        m = l + (r - l) / 2;
        unsigned long long cur = a[1];
        unsigned long long cnt = 1;
        for(int i = 2; i <= N; i++){
            if(a[i] - cur >= m){
                cnt++;
                cur = a[i];
            }
        }
        if(cnt >= K){
            ans = m;
            l = m + 1;
        }else r = m - 1;
    }

    cout << ans;

    return 0;
}
```

---

