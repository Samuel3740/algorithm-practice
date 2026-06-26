#include <iostream>
#include <string>
using namespace std;

int main(){
    string A, B;

    cin >> A >> B;
    
    string minA = A, minB = B;
    string maxA = A, maxB = B;
    
    for(int i = 0; i < A.length(); i++){
        if(A[i] == '6') minA[i] = '5';
        if(A[i] == '5') maxA[i] = '6';
    }
    
    for(int i = 0; i < B.length(); i++){
        if(B[i] == '6') minB[i] = '5';
        if(B[i] == '5') maxB[i] = '6';
    }

    int minSum = stoi(minA) + stoi(minB);
    int maxSum = stoi(maxA) + stoi(maxB);
    
    
    cout << minSum << " " << maxSum << endl;
    
    return 0;
}