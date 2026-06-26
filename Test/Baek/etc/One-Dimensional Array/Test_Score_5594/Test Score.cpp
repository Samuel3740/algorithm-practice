#include <iostream>
#include <vector>
using namespace std;

int main(){
    int S = 0, T = 0;
    vector<int> minguk(4); 
    vector<int> manse(4);
    
    for(int i = 0; i < 4; i++){
        cin >> minguk[i];
        S += minguk[i];
    }
    
    for(int i = 0; i < 4; i++){
        cin >> manse[i];
        T += manse[i];
    }
    
    if(S >= T){
        cout << S << endl;
    } 
    else{
        cout << T << endl;
    }
    
    return 0;
}