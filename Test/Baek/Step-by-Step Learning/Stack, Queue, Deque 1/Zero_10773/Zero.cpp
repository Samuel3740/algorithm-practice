#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int K;
    long long sum = 0;
    stack<int> s;

    cin >> K;
    

    
    for(int i = 0; i < K; i++){
        int num;
        cin >> num;
        
        if(num == 0){
            s.pop();
        } 
        else{
            s.push(num);
        }
    }
    
    while (!s.empty()){
        sum += s.top();
        s.pop();
    }
    
    cout << sum << '\n';
    
    return 0;
}