#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string name, value;
    map<string, string> company;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> name >> value;
        company[name] = value;
    }


    for(auto it = company.rbegin(); it != company.rend(); ++it){
        if(it->second == "enter"){  
            cout << it->first << '\n'; 
        }
    }

    return 0;
}