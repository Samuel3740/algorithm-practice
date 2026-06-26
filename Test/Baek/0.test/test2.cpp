#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N;
    float sum = 0;
    float avg;
    
    cin >> N;
    
    vector<int> arr(N);
    vector<float> tmp(N);
    
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }
    
   float Max_Value = *max_element(arr.begin(), arr.end());
    
    for(int i = 0; i < N; ++i){
        tmp[i] = arr[i] * 100 / Max_Value;
        sum += tmp[i];
    }
    
    cout.precision(6);    
    cout << fixed;    
    avg = sum / N;
    cout << avg << endl;
}