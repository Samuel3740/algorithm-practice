#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c;

    while(1){
        cin >> a >> b >> c;
        
        int sum = a + b + c;
        int max_side = max({a, b, c});

        if(a == 0 && b == 0 && c == 0){
            break;
        }


        if(sum - max_side <= max_side){
            cout << "Invalid" << endl;
        }
        else if(a == b && b == c){
            cout << "Equilateral" << endl;
        }
        else if(a == b || b == c || a == c){
            cout << "Isosceles" << endl;
        }
        else{
            cout << "Scalene" << endl;
        }
    }

    return 0;
}