#include <iostream>
using namespace std;


int gcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main(){
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    
    int numerator = a1 * b2 + a2 * b1;
    int denominator = b1 * b2;
    
    int g = gcd(numerator, denominator);
    
    cout << numerator / g << " " << denominator / g << endl;
    
    return 0;
}