#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int N;
        int maxAlcohol = -1;
        string maxSchool = "";
        
        cin >> N;


        for (int i = 0; i < N; i++) {
            string schoolName;
            int alcoholAmount;
            
            cin >> schoolName >> alcoholAmount;

            if (alcoholAmount > maxAlcohol) {
                maxAlcohol = alcoholAmount;
                maxSchool = schoolName;
            }

        }
        cout << maxSchool << "\n";
    }

    return 0;
}