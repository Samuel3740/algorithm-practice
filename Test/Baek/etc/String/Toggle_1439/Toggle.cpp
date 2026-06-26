#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int count0 = 0, count1 = 0;
    int n = s.length();
    
    for(int i = 0; i < n; i++){
        if(i == 0 || s[i] != s[i - 1]){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
        }
    }
    
    cout << min(count0, count1) << endl;
    
    return 0;
}