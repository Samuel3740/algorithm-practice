#include <iostream>
using namespace std;

int main(){
    string S; 
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin >> S;
    
    for(int i = 0; i < alphabet.length(); ++i){
        if(S.find(alphabet[i]) != string::npos){
            cout << S.find(alphabet[i]) << " ";
        }
        else cout << -1 << " ";
    }
}