#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    int count = 0;
    char hellobit;

    cin >> N;
    vector<char> arr(N);

    for(int i = 0; i < N; ++i){
        cin >> arr[i];
    }

    cin >> hellobit;

    for(int i = 0; i < N; ++i){
        if(arr[i] == hellobit){
            count++;
        }
    }

    cout << count << endl;
}
