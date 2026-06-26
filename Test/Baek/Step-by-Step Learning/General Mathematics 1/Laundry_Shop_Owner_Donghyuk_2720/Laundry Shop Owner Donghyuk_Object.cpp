#include <iostream>
using namespace std;

class Charge{
private:
    int Quarter, Dime, Nickel, Penny;

public:
    void Change_Exchange(double input){
        Quarter = Dime = Nickel = Penny = 0;

        Quarter = input / 0.25;
        input -= Quarter * 0.25;

        Dime = input / 0.10;
        input -= Dime * 0.10;

        Nickel = input / 0.05;
        input -= Nickel * 0.05;

        Penny = input / 0.01;
        
        cout <<  Quarter << " " << Dime << " " << Nickel << " " << Penny << endl;
    }
};

int main(){
    int T;
    double input;

    cin >> T;

    Charge func;
    for(int i = 0; i < T; ++i){
        cin >> input;
        func.Change_Exchange(input);
    }
}