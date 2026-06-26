#include <iostream>
#include <chrono>
#include <iomanip>
using namespace std;


int main() {
    auto now = chrono::system_clock::now();
    
    time_t time = chrono::system_clock::to_time_t(now);
    
    tm* local_time = localtime(&time);
    
    cout << put_time(local_time, "%Y-%m-%d") << endl;
    
    return 0;
}