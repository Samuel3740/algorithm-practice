#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    
    
    while (t--){
        char op;
        string line;
        getline(cin, line);
        
        istringstream iss(line);
        double result;
        iss >> result;
        
        while(iss >> op){
            if(op == '@'){
                result *= 3;
            }
            else if(op == '%'){
                result += 5;
            }
            else if(op == '#'){
                result -= 7;
            }
        }
        
        cout << fixed << setprecision(2) << result << endl;
    }
    
    return 0;
}