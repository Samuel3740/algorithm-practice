#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++){
        string name;
        cin >> name;
        
        transform(name.begin(), name.end(), name.begin(), ::tolower);
        
        cout << name << '\n';
    }
    
    return 0;
}