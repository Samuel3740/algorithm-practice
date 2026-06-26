#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int sum = 0;
    int scores[3];
    string names[3] = {"Soongsil", "Korea", "Hanyang"};

    for(int i = 0; i < 3; i++){
        cin >> scores[i];
        sum += scores[i];
    }


    if(sum >= 100){
        cout << "OK";
    }
    else{
        int minIdx = 0;
        for(int i = 1; i < 3; i++){
            if(scores[i] < scores[minIdx]){
                minIdx = i;
            }
        }
        
        cout << names[minIdx];
    }

    return 0;
}