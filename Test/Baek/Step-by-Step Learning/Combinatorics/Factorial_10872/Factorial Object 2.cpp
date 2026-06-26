#include <iostream>
using namespace std;

class Factorial{
    public: 
        int Factorial_Function(int input){
            int result = 1;
            for(int i = 1; i <= input; ++i){
                result *= i;
            } 
            return result;
        }
};

int main(){
    int input;
    Factorial factorial;

    cin >> input;
    int output = factorial.Factorial_Function(input);
    cout << output << endl;
}
