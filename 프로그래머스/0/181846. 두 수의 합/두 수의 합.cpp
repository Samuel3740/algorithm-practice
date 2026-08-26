#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string a, string b) {
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;
    string answer = "";

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
            sum += a[i] - '0';
            i--;
        }

        if (j >= 0) {
            sum += b[j] - '0';
            j--;
        }

        answer += char(sum % 10 + '0');
        carry = sum / 10;
    }

    reverse(answer.begin(), answer.end());

    
    return answer;
}