#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isGoodWord(const string& word) {
    stack<char> st;
    for (char c : word) {
        if (!st.empty() && st.top() == c) {
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int count = 0;
    while (n--) {
        string word;
        cin >> word;

        if (isGoodWord(word)) count++;
    }

    cout << count << endl;
    
    return 0;
}