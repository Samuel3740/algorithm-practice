#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string n;

    cin >> n;
    
    /* sort(n.begin(), n.end(), greater<char>()); */
    sort(n.begin(), n.end());
    reverse(n.begin(), n.end());
    
    cout << n << endl;
    
    return 0;
}