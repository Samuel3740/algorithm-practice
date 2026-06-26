#include <iostream>
using namespace std;

int main(){
    int n;
    int totalY = 0, totalM = 0;

    cin >> n;
    
    for(int i = 0; i < n; i++){
        int time;
        cin >> time;

        int chargeY = (time / 30 + 1) * 10;
        int chargeM = (time / 60 + 1) * 15;

        totalY += chargeY;
        totalM += chargeM;
    }

    if(totalY < totalM){
        cout << "Y " << totalY << endl;
    }
    else if(totalM < totalY){
        cout << "M " << totalM << endl;
    }
    else{
        cout << "Y M " << totalY << endl;
    }
    
    return 0;
}