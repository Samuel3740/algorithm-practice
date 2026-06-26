#include <iostream>
using namespace std;

int main(){
    int T;
    int minButtons = -1;
    int bestA = -1, bestB = -1, bestC = -1;
    
    cin >> T;
    
    
    for(int a = 0; a * 300 <= T; a++){
        for(int b = 0; a * 300 + b * 60 <= T; b++){
            int remaining = T - a * 300 - b * 60;
            if(remaining % 10 == 0){
                int c = remaining / 10;
                int totalButtons = a + b + c;
                if(minButtons == -1 || totalButtons < minButtons){
                    minButtons = totalButtons;
                    bestA = a;
                    bestB = b;
                    bestC = c;
                }
            }
        }
    }
    
    if(minButtons == -1){
        cout << -1 << endl;
    }
    else{
        cout << bestA << " " << bestB << " " << bestC << endl;
    }
    
    return 0;
}