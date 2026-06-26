#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int count;
    cin >> count;
    
    vector<long long> divisors(count);

    for(int i = 0; i < count; i++){
        cin >> divisors[i];
    }
    
    sort(divisors.begin(), divisors.end());
    

    long long result = (long long)divisors[0] * divisors[count - 1];
    
    
    cout << result << endl;
    
    return 0;
}