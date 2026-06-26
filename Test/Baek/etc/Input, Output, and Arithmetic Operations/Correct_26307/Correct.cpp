#include <iostream>
using namespace std;

int main(){
    int H, M;
    
    cin >> H >> M;
    
    int elapsed_minutes = (H - 9) * 60 + M;
    cout << elapsed_minutes << endl;
}
