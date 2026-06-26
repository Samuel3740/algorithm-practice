#include <iostream>
#include <string>
using namespace std;

int main(){
    string School_Name;
    cin >> School_Name;
    
    if(School_Name == "NLCS"){
        cout << "North London Collegiate School" << endl;
    }
    else if(School_Name == "BHA"){
        cout << "Branksome Hall Asia" << endl;
    }
    else if(School_Name == "KIS"){
        cout << "Korea International School" << endl;
    }
    else if(School_Name == "SJA"){
        cout << "St. Johnsbury Academy" << endl;
    }
    
    return 0;
}