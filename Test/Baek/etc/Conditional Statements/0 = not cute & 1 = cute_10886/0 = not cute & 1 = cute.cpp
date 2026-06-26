#include <iostream>
using namespace std;

int main() {
    int N;
    int cute_count = 0;
    int not_cute_count = 0;

    cin >> N;
    
    for(int i = 0; i < N; i++){
        int opinion;

        cin >> opinion;
        if(opinion == 1){
            cute_count++;
        }
        else{
            not_cute_count++;
        }
    }
    
    if(cute_count > not_cute_count){
        cout << "Junhee is cute!" << endl;
    }
    else{
        cout << "Junhee is not cute!" << endl;
    }
    
    
    return 0;
}