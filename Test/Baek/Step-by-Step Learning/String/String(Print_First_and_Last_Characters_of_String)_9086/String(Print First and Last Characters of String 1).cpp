#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    vector<string> input(T);
    
    for(int i = 0; i < T; ++i){
        cin >> input[i];
    }
    
    for(int i = 0; i < T; ++i){
        cout << *input[i].begin() << *(input[i].end() - 1) << endl;
    }
}
