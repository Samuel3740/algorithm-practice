#include <iostream>
#include <string>
#include <set>
using namespace std;

string F(string x){
    if(x == "0") return "0";

    int first = x[0] - '0';
    int len = x.length();

    return to_string(first * len);
}


int main(){
    string x;
    cin >> x;
    
    set<string> visited;
    string current = x;
    
    while(visited.find(current) == visited.end()){
        visited.insert(current);
        current = F(current);
    }
    
    string cycle_start = current;
    string next = F(current);
    
    if(next == cycle_start){
        cout << "FA" << endl;
    }
    else{
        cout << "NFA" << endl;
    }
    
    return 0;
}