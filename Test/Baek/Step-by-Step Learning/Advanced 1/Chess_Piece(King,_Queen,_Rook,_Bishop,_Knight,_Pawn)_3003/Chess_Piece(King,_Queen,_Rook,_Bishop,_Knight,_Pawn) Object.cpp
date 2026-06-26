#include <iostream>
#include <vector>
using namespace std;

class Chess{
    private:
        vector<int> piece = {1, 1, 2, 2, 2, 8};
    
    public:   
        void check_number(){
            vector<int> input(6);

            for(int i = 0; i < 6; ++i){
                cin >> input[i];
            }
            
            for(int i = 0; i < 6; ++i){
                cout << piece[i] - input[i] << " ";
            }
        } 
};

int main(){
    Chess func;
    func.check_number();
}