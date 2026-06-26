#include <iostream>
using namespace std;

int main(){
    int N;
    int totalRemaining = 0;

    cin >> N;
    
    for(int i = 0; i < N; i++){
        int students, apples;
        cin >> students >> apples;
        
        int remaining = apples % students;
        totalRemaining += remaining;
    }
    
    cout << totalRemaining << endl;
    
    return 0;
}