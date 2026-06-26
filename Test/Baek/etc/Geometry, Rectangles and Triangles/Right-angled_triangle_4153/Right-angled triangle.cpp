#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    int max_Value;

    while(1){
    cin >> a >> b >> c;
    
    if(a == 0 && b == 0 && c == 0) break;

    max_Value = max(a, max(b, c));

    
    if(max_Value == a){
        if(pow(max_Value,2) == pow(b,2) + pow(c,2)){
            cout << "right" << endl;
        } 
        else{
            cout << "wrong" << endl;
        } 
    }
    else if(max_Value == b){
        if(pow(max_Value,2) == pow(a,2) + pow(c,2)){
            cout << "right" << endl;
        } 
        else{
            cout << "wrong" << endl;
        } 
    }
    else{
        if(pow(max_Value,2) == pow(a,2) + pow(b,2)){
            cout << "right" << endl;
        } 
        else{
            cout << "wrong" << endl;
        } 
    }
    }
    return 0;
}