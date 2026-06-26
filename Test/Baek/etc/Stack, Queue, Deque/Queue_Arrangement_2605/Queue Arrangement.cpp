#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> line;
    
    for(int i = 1; i <= n; i++){
        int pos;
        cin >> pos;
        line.insert(line.begin() + (line.size() - pos), i);
    }
    
    for(int i = 0; i < n; i++){
        cout << line[i];

        if (i < n - 1) cout << " ";
    }
    
    cout << "\n";
    
    return 0;
}