#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> colors = {
        {"black", 0}, {"brown", 1}, {"red", 2}, {"orange", 3}, {"yellow", 4},
        {"green", 5}, {"blue", 6}, {"violet", 7}, {"grey", 8}, {"white", 9}
    };
    
    map<string, long long> multiplier = {
        {"black", 1}, {"brown", 10}, {"red", 100}, {"orange", 1000}, {"yellow", 10000},
        {"green", 100000}, {"blue", 1000000}, {"violet", 10000000}, {"grey", 100000000}, {"white", 1000000000}
    };
    
    string first, second, third;

    cin >> first >> second >> third;
    
    long long result = (colors[first] * 10 + colors[second]) * multiplier[third];
    
    cout << result << endl;
    
    return 0;
}