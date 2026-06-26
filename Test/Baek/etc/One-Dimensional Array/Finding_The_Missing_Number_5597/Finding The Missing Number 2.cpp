#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    set<int> arr;  
    
    for (int i = 0; i < 28; ++i) {
        cin >> n;
        arr.insert(n);
    }

    for (int i = 1; i <= 30; ++i) {
        if (arr.find(i) == arr.end()) { 
            cout << i << endl;
        }
    }
}