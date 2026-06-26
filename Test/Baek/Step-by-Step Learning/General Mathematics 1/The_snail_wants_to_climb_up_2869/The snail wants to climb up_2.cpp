#include <iostream>
using namespace std;

int main(){
    int A, B, V;
    
    cin >> A >> B >> V;
    int day_count = (V - B) / (A - B);
    
    if((V - B) % (A - B) != 0){
        day_count++;
    }

    cout << day_count;
}