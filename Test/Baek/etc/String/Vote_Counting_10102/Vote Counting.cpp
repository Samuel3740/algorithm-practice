#include <iostream>
#include <string>
using namespace std;

int main(){
    int V;
    int A = 0, B = 0;
    string votes;

    cin >> V >> votes;
    
    for(char c : votes){
        if (c == 'A') A++;
        
        else B++;
    }
    
    if (A > B) cout << "A";
    else if (B > A) cout << "B";
    else cout << "Tie";
    
    return 0;
}