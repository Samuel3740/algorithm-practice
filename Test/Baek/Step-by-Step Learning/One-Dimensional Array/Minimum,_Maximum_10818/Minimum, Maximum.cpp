#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    int Max_Value, min_Value;
    
    cin >> N;
    
    vector<int> arr(N);
    
    for(int i = 0; i < N; ++i){
        cin >> arr[i];        
    }
    
    Max_Value = *max_element(arr.begin(),arr.end());
    min_Value = *min_element(arr.begin(),arr.end());
    
    cout << min_Value << " " << Max_Value << endl;
}