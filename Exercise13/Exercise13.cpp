#include <bits/stdc++.h>

using namespace std;

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
