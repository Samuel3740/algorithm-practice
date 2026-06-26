#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    while(T--){
        int yonsei = 0, korea = 0;
        
        for(int i = 0; i < 9; i++){
            int y, k;
            cin >> y >> k;
            
            yonsei += y;
            korea += k;
        }
        
        if(yonsei > korea){
            cout << "Yonsei" << endl;
        }
        else if(korea > yonsei){
            cout << "Korea" << endl;
        }
        else{
            cout << "Draw" << endl;
        }
    }
    
    return 0;
}