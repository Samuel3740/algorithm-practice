#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    
    deque<int> dq;
    for(int i = 0; i < N; i++){
        int b;
        cin >> b;
        if(A[i] == 0) { 
            dq.push_back(b);
        }
    }
    
    int M;
    cin >> M;
    
    for(int i = 0; i < M; i++){
        int c;
        cin >> c;
        
        dq.push_front(c);
        cout << dq.back() << " ";
        dq.pop_back();
    }
    
    return 0;
}