#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    vector<string> suffixes;
    
    for(int i = 0; i < s.length(); i++){
        suffixes.push_back(s.substr(i));
    }
    
    sort(suffixes.begin(), suffixes.end());
    
    for(const string& suffix : suffixes){
        cout << suffix << "\n";
    }
    
    return 0;
}