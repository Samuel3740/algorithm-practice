#include <iostream>
using namespace std;

int main(){
    int Ca, Ba, Pa; // Available meals
    int Cr, Br, Pr; // Requested meals
    int unserved_people = 0;

    cin >> Ca >> Ba >> Pa;
    cin >> Cr >> Br >> Pr;

    if(Cr > Ca){
        unserved_people += Cr - Ca;
    }
    if(Br > Ba){
        unserved_people += Br - Ba;
    }
    if(Pr > Pa){
        unserved_people += Pr - Pa;
    }

    cout << unserved_people;
}