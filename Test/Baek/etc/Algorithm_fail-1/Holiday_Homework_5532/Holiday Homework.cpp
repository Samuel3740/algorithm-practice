#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int L, A, B, C, D;
    
    cin >> L >> A >> B >> C >> D;
    

    int korean_days = (A + C - 1) / C;  
    int math_days = (B + D - 1) / D;  
    

    int work_days = max(korean_days, math_days);
    

    cout << L - work_days << endl;

    system("pause");

    // cin.ignore();  // 입력 버퍼 정리
    // cin.get();     // 엔터 키 입력 대기
    
    return 0;
}