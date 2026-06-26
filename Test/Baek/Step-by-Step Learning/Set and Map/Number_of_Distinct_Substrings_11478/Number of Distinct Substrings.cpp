#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string s;
    set<string> substrings;
    
    cin >> s;
    
    for(int i = 0; i < s.length(); i++){
        for(int j = i; j < s.length(); j++){
            substrings.insert(s.substr(i, j - i + 1));
        }
    }
    
    cout << substrings.size() << endl;
    
    return 0;
}