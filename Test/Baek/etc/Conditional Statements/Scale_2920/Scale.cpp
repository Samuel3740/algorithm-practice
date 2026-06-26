#include <iostream>
using namespace std;

int main(){
    int notes[8];
    bool asc = true, desc = true;

    for(int i = 0; i < 8; i++){
        cin >> notes[i];
    }
    

    for(int i = 0; i < 8; i++){
        if(notes[i] != i + 1) asc = false;

        if (notes[i] != 8 - i) desc = false;
    }
    
    if(asc) cout << "ascending";

    else if(desc) cout << "descending";

    else cout << "mixed";
    
    return 0;
}