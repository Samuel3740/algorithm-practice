#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string words[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    for (int i = 0; i < 10; i++) {
        size_t pos;
        
        while ((pos = numbers.find(words[i])) != string::npos)
            numbers.replace(pos, words[i].size(), 1, '0' + i);
    }
    answer = stoll(numbers);
    
    return answer;
}