#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    
    cin >> A >> B >> C;
    cin >> D;
    
    int total_seconds = A * 3600 + B * 60 + C;
    
    total_seconds += D;
    
    total_seconds %= 86400;
    
    int end_hour = total_seconds / 3600;
    int end_minute = (total_seconds % 3600) / 60;
    int end_second = total_seconds % 60;
    
    cout << end_hour << " " << end_minute << " " << end_second << endl;
    
    return 0;
}