#include <iostream>
using namespace std;

class Factorial{
    public: 
    int result;
        int Factorial_Function(int input){
            int a = 1;
            for(int i = 1; i <= input; ++i){
                a*= i; 
            }
            result = a;
            return result;
        }
};

int main(){
    int input;
    Factorial factorial;

    cin >> input;
    factorial.Factorial_Function(input);
    cout << factorial.result << endl;
}