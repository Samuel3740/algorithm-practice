#include <iostream>
#include <string>
using namespace std;

int main(){
    int N;
    int count = 0;
    string jinho_mbti;

    cin >> jinho_mbti;

    cin >> N;

    for(int i = 0; i < N; i++){
        string friend_mbti;

        cin >> friend_mbti;

        if(friend_mbti == jinho_mbti){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}