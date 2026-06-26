#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;

    while (getline(cin, s)){
        stack<char> st;
        bool ok = 1;

        if (s == "."){
            break;
        }

        for(char c : s){
            if(c == '(' || c == '['){
                st.push(c);
            }
            else if(c == ')'){
                if(st.empty() || st.top() != '('){
                    ok = 0;
                    break;
                }
                st.pop();
            }
            else if(c == ']'){
                if(st.empty() || st.top() != '['){
                    ok = 0;
                    break;
                }
                st.pop();
            }
        }

        if (!st.empty()){
            ok = 0;
        }

        cout << (ok ? "yes" : "no") << '\n';
    }
    return 0;
}