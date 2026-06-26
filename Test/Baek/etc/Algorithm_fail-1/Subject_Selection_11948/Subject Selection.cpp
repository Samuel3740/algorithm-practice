#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;
    
    int science[4] = {A, B, C, D};
    
    sort(science, science + 4, greater<int>());
    
    int science_sum = science[0] + science[1] + science[2];
    int social = max(E, F);
    
    cout << science_sum + social << endl;
    
    return 0;
}