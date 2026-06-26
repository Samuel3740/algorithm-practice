#include <iostream>
using namespace std;

int main(){
    int n;
    int max_area = 0;

    cin >> n;

    for(int i = 0; i < n; ++i){
        int h, w;
        cin >> h >> w;
        int area = h * w;
        if(area > max_area){
            max_area = area;
        }
    }

    cout << max_area << endl;
}
