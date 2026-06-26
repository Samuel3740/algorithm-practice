#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    while(b){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    int result = 0;
    cin >> n;
    
    int pos[100000];

    for(int i = 0; i < n; i++){
        cin >> pos[i];
    }
    
    int g = pos[1] - pos[0];

    for(int i = 2; i < n; i++){
        g = gcd(g, pos[i] - pos[i-1]);
    }
    

    for(int i = 1; i < n; i++){
        result += (pos[i] - pos[i-1]) / g - 1;
    }
    
    cout << result << '\n';
    
    return 0;
}