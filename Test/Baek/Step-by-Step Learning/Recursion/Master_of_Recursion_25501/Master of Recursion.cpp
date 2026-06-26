#include <iostream>
#include <string>
using namespace std;

int callCount;

int recursion(const string& s, int l, int r){
    callCount++;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const string& s){
    return recursion(s, 0, s.length()-1);
}


int main(){    
    int T;
    cin >> T;
    
    while(T--){
        string S;
        cin >> S;
        
        callCount = 0;
        int result = isPalindrome(S);
        
        cout << result << " " << callCount << "\n";
    }
    
    return 0;
}