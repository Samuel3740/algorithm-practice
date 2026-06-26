#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    set<string> dancing;
    dancing.insert("ChongChong");
    
    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        
        if(dancing.count(a) || dancing.count(b)){
            dancing.insert(a);
            dancing.insert(b);
        }
    }
    
    cout << dancing.size() << endl;
    
    return 0;
}