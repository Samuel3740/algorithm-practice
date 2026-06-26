#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int current = 1;
    stack<int> space;
    
    cin >> n;
    

    
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        
        while(!space.empty() && space.top() == current){
            space.pop();
            current++;
        }
        
        if(num == current){
            current++;
        }
        else{
            space.push(num);
        }
    }
    
    while(!space.empty() && space.top() == current){
        space.pop();
        current++;
    }
    
    if(space.empty()){
        cout << "Nice\n";
    }
    else{
        cout << "Sad\n";
    }
    
    return 0;
}