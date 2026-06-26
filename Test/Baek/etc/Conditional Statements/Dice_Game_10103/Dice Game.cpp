#include <iostream>
using namespace std;

int main(){
    int n;
    int changyoung_score = 100, sangdeok_score = 100;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int c, s;
        cin >> c >> s;
        
        if(c < s){
            changyoung_score -= s;
        }
        else if(c > s){
            sangdeok_score -= c;
        }
    }
    
    cout << changyoung_score << "\n" << sangdeok_score << "\n";
    
    return 0;
}