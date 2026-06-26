#include <iostream>
#include <vector>
using namespace std;

int main(){
int n;
int cnt = 0;
vector <int> v(5, 0);

cin >> n;

for(int i = 0; i < 5; ++i){
    cin >> v[i];
}

for(int i = 0; i < 5; ++i){
    if(v[i] == n){
        cnt++;
    } 
}

cout << cnt << endl;

return 0;
}