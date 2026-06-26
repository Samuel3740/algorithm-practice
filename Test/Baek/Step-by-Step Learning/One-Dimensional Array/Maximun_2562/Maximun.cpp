#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Finding_Max_Value{
    private:
        int MaxValue;
        int count = 0;
        vector<int> arr;
    
    public:
        void InputData(){
            arr.resize(9);
            for(int i = 0; i < 9; ++i){
                cin >> arr[i];
            }
        }

        void Max_Value(){
            MaxValue = *max_element(arr.begin(), arr.end());

            for(int i = 0; i < 9; ++i){
                if(arr[i] == MaxValue){
                    count = i + 1;
                }
            }
        }

        void Print(){
            cout << MaxValue << endl << count << endl;
        }
};

int main(){
    Finding_Max_Value a;
    a.InputData();
    a.Max_Value();
    a.Print();
}