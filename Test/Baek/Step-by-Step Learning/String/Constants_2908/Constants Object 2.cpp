#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Constants{
private:
    string A, B;
    int C, D;

public:
    void setA(const string& a){
        A = a;
        }
    void setB(const string& b){
        B = b;
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
    string inputA, inputB;
    cin >> inputA >> inputB;

    a.setA(inputA);  
    a.setB(inputB);  

    a.DataProcessing(); 
    a.print(); 
}