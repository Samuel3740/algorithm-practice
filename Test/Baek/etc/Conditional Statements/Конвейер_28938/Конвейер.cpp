#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        sum += x;
    }
    
    if(sum > 0){
        cout << "Right" << endl;
    }
    else if(sum < 0){
        cout << "Left" << endl;
    }
    else{
        cout << "Stay" << endl;
    }
    
    return 0;
}