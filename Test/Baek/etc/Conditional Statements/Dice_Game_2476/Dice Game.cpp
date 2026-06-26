#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int maxPrize = 0;

    cin >> n;
    
    
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        
        int prize = 0;
        
        if(a == b && b == c){
            prize = 10000 + a * 1000;
        }
        else if(a == b || b == c || a == c){
            int same;

            if(a == b) same = a;
            else if(b == c) same = b;
            else same = a;
            
            prize = 1000 + same * 100;
        }
        else{
            int maxDice = max({a, b, c});
            prize = maxDice * 100;
        }
        
        maxPrize = max(maxPrize, prize);
    }
    
    cout << maxPrize << endl;
    
    return 0;
}