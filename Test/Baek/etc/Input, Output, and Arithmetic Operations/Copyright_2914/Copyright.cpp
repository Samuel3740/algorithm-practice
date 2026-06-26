#include <iostream>
using namespace std;

int main(){
    int A, I, result;

    cin >> A >> I;

    result = A * (I - 1) + 1;

    cout << result << endl;

    return 0;
}


/*
저작권이 있는 멜로디의 평균값과 앨범에 수록된 곡의 개수를 이용를 입력하였을 때,
저작권이 있는 멜로디의 개수를 구하는 프로그램을 작성.
(단, 평균값은 저작권이 있는 멜로디의 개수를 앨범에 수록된 곡의 개수로 나눈 값으로 정의하며 항상 올림을 통해
정수로 만들어야 한다.)

x = M/A (M:저작권이 있는 멜로디의 개수, A: 앨범에 수록된 곡의 개수, I: 평균값)

n-1 < x <= n
I-1 < M/A <= I
A*(I-1) < M <= A*I
M의 최소값(정수) = A*(I-1) + 1



*/