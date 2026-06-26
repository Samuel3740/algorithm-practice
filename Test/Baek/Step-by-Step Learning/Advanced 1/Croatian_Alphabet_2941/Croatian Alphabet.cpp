#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;
    
    bool changed = true;
    
    while(changed){
        changed = false;
        if(input.find("lj") != string::npos){
            input.replace(input.find("lj"), 2, "0");
            changed = true;
        } 
        else if (input.find("nj") != string::npos){
            input.replace(input.find("nj"), 2, "0");
            changed = true;
        }
        else if (input.find("c=") != string::npos){
            input.replace(input.find("c="), 2, "0");
            changed = true;
        } 
        else if (input.find("c-") != string::npos){
            input.replace(input.find("c-"), 2, "0");
            changed = true;
        } 
        else if (input.find("dz=") != string::npos){
            input.replace(input.find("dz="), 3, "0");
            changed = true;
        } 
        else if (input.find("d-") != string::npos){
            input.replace(input.find("d-"), 2, "0");
            changed = true;
        } 
        else if (input.find("s=") != string::npos){
            input.replace(input.find("s="), 2, "0");
            changed = true;
        } 
        else if (input.find("z=") != string::npos){
            input.replace(input.find("z="), 2, "0");
            changed = true;
        }
    }
    cout << input.length() << endl;
}