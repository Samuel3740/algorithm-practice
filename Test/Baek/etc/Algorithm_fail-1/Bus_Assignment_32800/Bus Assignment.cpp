#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    long long max_passengers = 0; 
    long long current = 0;       

    cin >> n;

    for(int i = 0; i < n; ++i){
        long long a, b;

        cin >> a >> b;

        current -= a;
        if(current < 0){
            current = 0;
        }  

        current += b; 

        max_passengers = max(max_passengers, current);
    }

    cout << max_passengers << endl;

    return 0;
}