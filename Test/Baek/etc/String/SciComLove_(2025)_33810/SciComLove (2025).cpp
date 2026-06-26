#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;

    string str = "SciComLove";
    string input;

    cin >> input;


    for(int i = 0; i < str.length(); ++i){
        if(input[i] != str[i]){
            count++;
        }
    }

    cout << count << endl;
}