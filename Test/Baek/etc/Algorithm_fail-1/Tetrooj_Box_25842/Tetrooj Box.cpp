#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int b, r;
    cin >> b >> r;
    vector<int> heights(b, 0); 

    for(int i = 0; i < r; ++i){
        int h, v, c;
        cin >> h >> v >> c;
        c--;

        int current_max = 0;
        for(int j = c; j < c + h; ++j){
            current_max = max(current_max, heights[j]);
        }

        for(int j = c; j < c + h; ++j){
            heights[j] = current_max + v;
        }
    }

    cout << *max_element(heights.begin(), heights.end()) << endl;
}