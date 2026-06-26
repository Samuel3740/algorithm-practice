#include <iostream>
#include <string>
using namespace std;

bool isHansu(int num){
    if (num < 10) return true;
    
    string s = to_string(num);
    int diff = stoi(string(1, s[1])) - stoi(string(1, s[0]));

    for(int i = 2; i < s.length(); i++){
        if (stoi(string(1, s[i])) - stoi(string(1, s[i-1])) != diff){
            return false;
        }
    }

    return true;
}

int main(){
    int N;
    int cnt = 0;

    cin >> N;

    for(int i = 1; i <= N; i++){
        if(isHansu(i)){
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}