#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int count = 0;

    cin >> n;
    
    set<string> active_users;
    
    for(int i = 0; i < n; i++){
        string input;
        cin >> input;
        
        if(input == "ENTER"){
            active_users.clear();
        }
        else{
            if(active_users.find(input) == active_users.end()){
                count++;
                active_users.insert(input);
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}