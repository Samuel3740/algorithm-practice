#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, M;
    cin >> H >> M;

    int t = H * 60 + M;

    if ((390 <= t && t <= 540) ||
        (590 <= t && t <= 600) ||
        (650 <= t && t <= 660) ||
        (710 <= t && t <= 720) ||
        (770 <= t && t <= 830) ||
        (880 <= t && t <= 890) ||
        (940 <= t && t <= 950) ||
        (1000 <= t && t <= 1370)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}