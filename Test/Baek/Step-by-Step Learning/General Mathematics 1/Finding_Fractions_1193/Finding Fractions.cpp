#include <iostream>
using namespace std;

int main(){
    int n, numerator, denominator;
    int line = 1;

    cin >> n;
    

    while(n > line){
        n -= line;
        line++;
    }

    if(line % 2 == 0){              // 짝수 번째 줄이면 아래에서 위로 감
        numerator = n;
        denominator = line - n + 1;
    } 
    else{                              // 홀수 번째 줄이면 위에서 아래로 감
        numerator = line - n + 1;
        denominator = n;
    }

    cout << numerator << "/" << denominator << endl;
}
