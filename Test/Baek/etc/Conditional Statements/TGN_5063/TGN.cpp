#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        long long r, e, c;
        cin >> r >> e >> c;
        
        long long no_ad_profit = r;
        long long ad_profit = e - c;
        
        if(ad_profit > no_ad_profit){
            cout << "advertise" << endl;
        }
        else if(ad_profit < no_ad_profit){
            cout << "do not advertise" << endl;
        }
        else{
            cout << "does not matter" << endl;
        }
    }
    
    return 0;
}