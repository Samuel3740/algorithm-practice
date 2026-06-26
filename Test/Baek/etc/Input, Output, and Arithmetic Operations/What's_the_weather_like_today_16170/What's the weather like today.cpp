#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
    time_t now = time(0);
    tm* utc = gmtime(&now);
    
    cout << utc->tm_year + 1900 << "\n";
    cout << setfill('0') << setw(2) << utc->tm_mon + 1 << "\n";
    cout << setfill('0') << setw(2) << utc->tm_mday << "\n";
    
    return 0;
}