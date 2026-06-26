// Odd_2576

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int SUM(vector<int> &str){
    int sum = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] % 2 == 1){
            sum += str[i];
        }
    }
    return sum;
}

int minValue(vector<int> &str){
    int min = 101;
    for(int i = 0; i < str.size(); i++){
        if(str[i] % 2 == 1 && str[i] < min){
            min = str[i];
        }
    }
    return min;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> str(7);
    bool hasOdd = false; 

    for(int i = 0; i < 7; i++){
        cin >> str[i];
        if (str[i] % 2 == 1) {
            hasOdd = true; 
        }
    }

    if(!hasOdd){ 
        cout << "-1" << endl;
    }
    else{

        cout << SUM(str) << "\n";
        cout << minValue(str) << "\n";
    }

    return 0;
}