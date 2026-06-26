#include <iostream>
using namespace std;

int main(){
    int n;
    int total = 0;
    int consecutive = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int result;
        cin >> result;
        
        if(result == 1){
            consecutive++;
            total += consecutive;
        } 
        else{
            consecutive = 0;
        }
    }
    
    cout << total << endl;
    
    return 0;
}