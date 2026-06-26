#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    long long str;
    int N;
    string result;

    cin >> str >> N;

    while(str){
        int remainder = str % N;
        result += ((remainder < 10) ? ('0' + remainder) : ('A' + remainder - 10));
        str /= N;
    }

    reverse(result.begin(), result.end());
    cout << result;
}