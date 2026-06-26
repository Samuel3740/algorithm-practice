#include <iostream>
#include <vector>
using namespace std;

int main(){
    int C, n;
    double avg, result;
    
    cin >> C;

    for(int i = 0; i < C; ++i){
        cin >> n;
        vector<int> score(n);
        int sum = 0;
        int count = 0;
        
        for(int j = 0; j < n; ++j){
            cin >> score[j];
            sum += score[j];
        }

        avg = sum / (double)n;

        for(int k = 0; k < n; ++k){
            if(score[k] > avg){
                count++;
            }
        }
        
        result = (count / (double)n) * 100;

        cout << fixed;
        cout.precision(3);
        cout << result << "%" << endl;
    }
}
