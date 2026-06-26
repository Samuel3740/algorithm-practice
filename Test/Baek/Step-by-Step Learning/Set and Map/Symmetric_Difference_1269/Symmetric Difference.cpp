#include <iostream>
#include <set>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    int count = 0;
    
    cin >> n >> m;
    
    set<int> A, B;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        A.insert(x);
    }
    
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        B.insert(x);
    }
    
    for(int x : A){
        if(B.find(x) == B.end()){
            count++;
        }
    }
    
    for(int x : B){
        if(A.find(x) == A.end()){
            count++;
        }
    }
    
    cout << count << '\n';
    
    return 0;
}