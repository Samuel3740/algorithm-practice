#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int result = 0;
    string str;
    cin >> str >> N;

    for(char c : str){ // for(char c : str)은 str문자열에 한 글자씩 돌아가며 순환
        result = result * N + (isdigit(c) ? c - '0' : c - 'A' + 10); // isdigit(c)는 c가 숫자면 true, 숫자가 아니면 false 반환
    }

    cout << result;
}