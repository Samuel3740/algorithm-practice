#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string S;
    vector<int> count(26, 0);

    cin >> S;
    
    for(char c : S){
        count[c - 'a']++;
    }
    
    for(int i = 0; i < 26; i++){
        cout << count[i] << " ";
    }
    cout << endl;
}