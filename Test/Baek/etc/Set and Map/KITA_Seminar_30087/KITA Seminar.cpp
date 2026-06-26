#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, string> room = {
        {"Algorithm", "204"},
        {"DataAnalysis", "207"},
        {"ArtificialIntelligence", "302"},
        {"CyberSecurity", "B101"},
        {"Network", "303"},
        {"Startup", "501"},
        {"TestStrategy", "105"}
    };

    int n;
    cin >> n;

    while(n--){
        string seminar;
        cin >> seminar;
        
        cout << room[seminar] << "\n";
    }

    return 0;
}