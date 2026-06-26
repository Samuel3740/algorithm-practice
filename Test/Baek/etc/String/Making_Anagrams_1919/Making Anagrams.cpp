#include <iostream>
#include <string>
using namespace std;

int main(){
    int ans = 0;
    string a, b;
    int freq[26] = {};

    cin >> a >> b;
    
    
    for (char c : a) freq[c - 'a']++;
    for (char c : b) freq[c - 'a']--;
    
    
    for(int i = 0; i < 26; i++){
        ans += abs(freq[i]);
    }
    
    cout << ans << endl;

    return 0;
}