#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    
    for(int i = 0; i < 8; i++){
        string line;
        cin >> line;
        
        for(int j = 0; j < 8; j++){
            if((i + j) % 2 == 0 && line[j] == 'F'){
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}
