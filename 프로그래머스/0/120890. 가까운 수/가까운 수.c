#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int array[], size_t array_len, int n) {
    int answer = array[0];
    int min_diff = abs(array[0] - n);

    for (size_t i = 1; i < array_len; i++) {
        int diff = abs(array[i] - n);

        if (diff < min_diff || (diff == min_diff && array[i] < answer)) {
            min_diff = diff;
            answer = array[i];
        }
    }

    return answer;
}