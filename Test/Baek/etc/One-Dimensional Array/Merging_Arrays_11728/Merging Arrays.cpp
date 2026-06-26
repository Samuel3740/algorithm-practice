#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int i = 0, j = 0;

    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    vector<int> result;


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }

    while (i < n) {
        result.push_back(a[i]);
        i++;
    }

    while (j < m) {
        result.push_back(b[j]);
        j++;
    }

    for (int k = 0; k < result.size(); k++) {
        cout << result[k] << " ";
    }

    return 0;
}