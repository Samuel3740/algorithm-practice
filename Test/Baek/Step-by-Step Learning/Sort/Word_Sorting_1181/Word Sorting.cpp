#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;


bool compare(const string& a, const string& b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    return a < b;
}



int main(){
    int N;
    set<string> word;

    cin >> N;
    
    
    for(int i = 0; i < N; i++){
        string str;

        cin >> str;

        word.insert(str);
    }
    
    vector<string> strs(word.begin(), word.end());
    
    sort(strs.begin(), strs.end(), compare);
    
    for(const string& str : strs){
        cout << str << "\n";
    }
    
    return 0;
}