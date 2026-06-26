#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Constants{
    private:
       string A, B;
       int C, D;

    public: 
       void InputData(){
        cin >> A >> B;
       }

       void DataProcessing(){
        reverse(A.begin(), A.end());
        reverse(B.begin(), B.end());

        C = stoi(A);
        D = stoi(B);
       }

       void print(){
            cout << (C > D ? C : D) << endl;
       }
};

int main(){
    Constants a;
    a.InputData();
    a.DataProcessing();
    a.print();
}
