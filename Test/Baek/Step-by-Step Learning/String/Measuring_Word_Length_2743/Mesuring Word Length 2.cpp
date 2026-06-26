#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;
    
    int count = 0;
    for(char c : input){
        count++;
    }
    cout << count << endl;
}