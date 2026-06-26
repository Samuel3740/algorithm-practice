#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, x;
    int cnt = 0;

    cin >> n;
    
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    cin >> x;
    
    sort(a.begin(), a.end());
    
    int* left = &a[0];
    int* right = &a[n - 1];
    
    while(left < right){
        int sum = *left + *right;
        
        if(sum == x){
            cnt++;
            left++;
            right--;
        }
        else if(sum < x){
            left++;
        }
        else{
            right--;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}