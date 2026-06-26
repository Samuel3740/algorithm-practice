#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int N;
    int cnt[26] = {0};
    string result = "";
    
    cin >> N;
    for(int i = 0; i < N; i++){
        string lastName;
        cin >> lastName;
        
        cnt[lastName[0] - 'a']++;
    }
    
    for(int i = 0; i < 26; i++){
        if(cnt[i] >= 5){
            result += (char)(i + 'a');
        }
    }
    
    if(result.empty()){
        cout << "PREDAJA" << endl;
    }
    else{
        cout << result << endl;
    }
    
    return 0;
}