#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long D, H, W;
    cin >> D >> H >> W;

    double ratio = sqrt((double)(D * D) / (H * H + W * W));

    int realH = (int)(H * ratio);
    int realW = (int)(W * ratio);

    cout << realH << " " << realW << endl;

    return 0;
}