#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;

    vector<int> x(n);
    vector<int> y(n);

    for(int i = 0; i < n; ++i){
        cin >> x[i] >> y[i];
    }

    int min_x = *min_element(x.begin(), x.end());
    int max_x = *max_element(x.begin(), x.end());
    int min_y = *min_element(y.begin(), y.end());
    int max_y = *max_element(y.begin(), y.end());

    int area = (max_x - min_x) * (max_y - min_y);

    cout << area;

    return 0;
}
