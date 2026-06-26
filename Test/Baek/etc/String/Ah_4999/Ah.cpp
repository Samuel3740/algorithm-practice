#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;

int main() {
    string can_say, wants;

    cin >> can_say >> wants;

    int count_can = count(can_say.begin(), can_say.end(), 'a');
    int count_wants = count(wants.begin(), wants.end(), 'a');

    if (count_can >= count_wants){
        cout << "go" << endl;        
    }
    else{
        cout << "no" << endl;
    }


    return 0;
}