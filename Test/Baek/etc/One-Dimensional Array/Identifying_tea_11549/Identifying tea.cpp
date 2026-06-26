#include <iostream>
#include <vector>
using namespace std;

int main(){
    int T, A, B, C, D, E;
    int count = 0;
    
    cin >> T;
    cin >> A >> B >> C >> D >> E;

    vector<int> nums = {A, B, C, D, E};

    for(int i = 0; i < 5; ++i){
        if(nums[i] == T){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
