# C++ 정리 노트

이 문서는 `c:\Users\roysa\Dev\algorithm-practice\프로그래머스` 폴더에 있는 풀이들을 보면서 정리한 C++ 학습 노트다. 문제 풀이 자체보다, 자주 반복되는 문법과 구현 습관을 빠르게 복습하는 데 목적이 있다.

## 1. 자주 보이는 풀이 형태

프로그래머스 C++ 풀이는 대부분 아래 형태로 끝난다.

```cpp
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> array, int n) {
	int answer = 0;
	return answer;
}
```

문제에 따라 `main()` 대신 `solution()`만 작성하고, 입출력 문제일 때만 `cin`, `cout`을 사용하는 방식이 많다.

## 2. 자주 쓰는 STL

### `vector`
- 배열처럼 가장 많이 사용한다.
- 반복문은 `for (int i = 0; i < v.size(); i++)` 형태와 range-based for 둘 다 자주 쓴다.
- 정렬 후 앞/뒤 원소를 바로 쓰는 패턴이 많다.

### `string`
- 문자열 누적은 `answer += c`, `answer.push_back(c)` 둘 다 많이 쓴다.
- 문자열 길이 확인은 `size()` 또는 `length()`를 사용한다.
- 숫자 문자열 변환은 `stoi()`를 자주 쓴다.

### `sort`
- 가장 많이 보이는 정렬 패턴은 다음과 같다.

```cpp
sort(numbers.begin(), numbers.end());
sort(sorted.begin(), sorted.end(), greater<int>());
```

- 오름차순 정렬 후 앞 1~2개만 사용하는 풀이가 많다.

### `map`
- 문자열을 문자로 바꾸는 대응표를 만들 때 유용하다.
- 모스부호처럼 정답 사전이 필요한 문제에서 자주 쓴다.

```cpp
map<string, char> morse = {
	{".-", 'a'}, {"-...", 'b'}
};
```

### `stringstream`
- 공백 기준으로 문자열을 잘라야 할 때 사용한다.
- 입력 문자열을 단어 단위로 분리할 때 특히 편하다.

```cpp
stringstream ss(letter);
while (ss >> word) {
	answer.push_back(morse[word]);
}
```

## 3. 자주 쓰는 구현 패턴

### 1) 조건에 맞는 값 세기

```cpp
for (int i = 0; i < array.size(); i++) {
	if (array[i] == n) {
		answer++;
	}
}
```

### 2) 문자열 반복 출력

```cpp
for (int i = 0; i < n; i++) {
	cout << str;
}
```

### 3) 모음 제거

- 문자 하나씩 보면서 제외 조건을 걸면 된다.
- `if (c != 'a' && c != 'e' ...)` 형태가 기본이다.

### 4) 숫자로 바꿔 비교하기

- 문자열 두 개를 합쳐서 비교하거나, 문자열을 숫자로 바꾸어 비교할 때 `stoi()`를 쓴다.
- 다만 너무 큰 수는 범위를 확인해야 한다.

## 4. 자주 쓰는 문법 습관

- `using namespace std;`를 거의 항상 사용한다.
- 변수명은 `answer`, `word`, `sorted`, `morse`처럼 기능이 드러나게 짧게 짓는다.
- `answer`를 먼저 만들고 마지막에 반환하는 구조가 많다.
- 복잡한 클래스나 함수 분리는 거의 없고, 한 문제를 한 함수 안에서 끝내는 방식이 많다.

## 5. 공부할 때 보면 좋은 포인트

- 반복문을 쓸지, STL 함수로 줄일지 먼저 판단한다.
- 문자열 문제는 `string`, `stoi`, `stringstream` 조합을 먼저 떠올린다.
- 배열 문제는 `vector`와 `sort`만으로 끝나는 경우가 많다.
- 대응표가 있으면 `map` 또는 `unordered_map`을 고려한다.

## 6. 자주 나오는 실수

- `size()`의 반환형은 보통 `size_t`라서, 비교할 때 경고가 날 수 있다.
- `stoi()`는 입력이 숫자가 아니면 에러가 난다.
- `stringstream`은 공백 기준 분리에 강하지만, 구분자가 다른 경우에는 따로 처리해야 한다.
- 정렬 후 원본이 필요한 경우에는 복사본을 만들어야 한다.

## 7. 한 줄 요약

프로그래머스 C++ 풀이는 `vector`, `string`, `sort`, `stoi`, `map`, `stringstream`을 중심으로, 짧은 조건 분기와 단순 반복문으로 푸는 연습이라고 보면 된다.
