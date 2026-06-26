#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    
    for(int i = 1; i <= n; i++){
        string line;
        getline(cin, line);
        
        cout << i << ". " << line << endl;
    }
    
    return 0;
}