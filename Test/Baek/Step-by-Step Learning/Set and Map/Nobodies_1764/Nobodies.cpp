#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    
    set<string> unheard;
    set<string> unseen;
    
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        unheard.insert(name);
    }
    
    for (int i = 0; i < m; i++){
        string name;
        cin >> name;
        unseen.insert(name);
    }
    
    vector<string> result;
    
    for(const string& name : unheard){
        if(unseen.find(name) != unseen.end()){
            result.push_back(name);
        }
    }
    
    sort(result.begin(), result.end());
    
    cout << result.size() << '\n';

    for(const string& name : result){
        cout << name << '\n';
    }
    
    return 0;
}