#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count = 0;
    int y_count = 0;

    for (char c : s)
    {
        char lower = tolower(c);
        if (lower == 'p') p_count++;
        else if (lower == 'y') y_count++;
    }

    answer = (p_count == y_count);

    return answer;
}