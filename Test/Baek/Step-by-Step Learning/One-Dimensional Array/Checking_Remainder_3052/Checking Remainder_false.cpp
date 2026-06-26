#include <iostream>
#include <vector>
using namespace std;

int main(){
    int remainder;
    int count = 0;
    vector<int> arr(10);
    
    for(int i = 0; i < 10; ++i){
        cin >> arr[i];
        remainder = arr[i] % 42; // 나머지가 0이 아닌 경우를 카운트 but 서로 다른 나머지의 개수는는 판단X 
         
        if(remainder != 0){
            count += 1;
        }
    }
    cout << count << endl;    
}