#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> dwarfs(9);
    int sum = 0, fake1 = -1, fake2 = -1;
    
    for (int i = 0; i < 9; i++) {
        cin >> dwarfs[i];
        sum += dwarfs[i];
    }
    
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - dwarfs[i] - dwarfs[j] == 100) {
                fake1 = i;
                fake2 = j;

                break;
            }
        }
        if (fake1 != -1){
            break;
        }
    }
    
    for (int i = 0; i < 9; i++) {
        if (i != fake1 && i != fake2) {
            cout << dwarfs[i] << "\n";
        }
    }
    
    return 0;
}