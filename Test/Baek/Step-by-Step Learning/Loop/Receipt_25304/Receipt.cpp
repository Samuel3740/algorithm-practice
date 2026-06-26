#include <iostream>
using namespace std;

int main(){
    int a, b, X, N;
    int sum = 0;
    int price = 0;
    
    cin >> X;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        price = a*b;
        sum += price;
    }
    
    if(sum == X){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }    
}