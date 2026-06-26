#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<int> fbi_agents;
    
    for(int i = 1; i <= 5; i++){
        string codename;
        cin >> codename;
        
        if(codename.find("FBI") != string::npos){
            fbi_agents.push_back(i);
        }
    }
    
    if(fbi_agents.empty()){
        cout << "HE GOT AWAY!" << endl;
    }
    else{
        for(int agent : fbi_agents){
            cout << agent << "\n";
        }
    }
    
    return 0;
}