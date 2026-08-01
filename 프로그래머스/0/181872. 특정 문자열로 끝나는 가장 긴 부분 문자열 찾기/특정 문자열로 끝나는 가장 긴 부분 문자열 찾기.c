#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString, const char* pat) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int myLen = strlen(myString);
    int patLen = strlen(pat);
    int endIndex = 0;

    for (int i = 0; i <= myLen - patLen; i++) {
        if (strncmp(myString + i, pat, patLen) == 0) {
            endIndex = i + patLen;
        }
    }

    char* answer = (char*)malloc(sizeof(char) * (endIndex + 1));

    strncpy(answer, myString, endIndex);
    answer[endIndex] = '\0';

    return answer;
}