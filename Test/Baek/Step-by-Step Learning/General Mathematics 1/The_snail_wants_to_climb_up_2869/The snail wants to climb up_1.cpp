//이 코드로 진행시 시간초과 에러 발생

#include <iostream>
using namespace std;

int main(){
    int A, B, V, tmp;
    int height = 0;
    int day_count = 0;

    cin >> A >> B >> V;

    while(true){
        day_count++;
        height += A; 

        if(height >= V){ 
            break;
        }
        else{
            height -= B;
        } 
    }

    cout << day_count;
}


