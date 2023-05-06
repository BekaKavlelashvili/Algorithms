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
