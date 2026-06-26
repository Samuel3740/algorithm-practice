#include <iostream>
using namespace std;

int main(){
    long long N, T, P;
    long long total_shirt_bundles = 0;
    long long sizes[6];

    
    cin >> N;
    
    for(int i = 0; i < 6; i++){
        cin >> sizes[i];
    }
    
    cin >> T >> P;
    

    for(int i = 0; i < 6; i++){
        total_shirt_bundles += (sizes[i] + T - 1) / T;
    }
    
    long long pen_bundles = N / P;
    long long pen_single = N % P;
    
    cout << total_shirt_bundles << endl;
    cout << pen_bundles << " " << pen_single << endl;
    
    return 0;
}