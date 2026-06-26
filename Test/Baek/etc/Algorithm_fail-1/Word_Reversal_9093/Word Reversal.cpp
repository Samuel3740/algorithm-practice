#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    cin.ignore();
    
    while(T--){
        string line;
        getline(cin, line);
        
        string result = "";
        string word = "";
        
        for(int i = 0; i < line.length(); i++){
            if(line[i] == ' ') {
                reverse(word.begin(), word.end());
                result += word;
                result += ' ';
                word = "";
            }
            else{
                word += line[i];
            }
        }
        
        if(!word.empty()){
            reverse(word.begin(), word.end());
            result += word;
        }
        
        cout << result << endl;
    }
    
    return 0;
}