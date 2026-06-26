#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
	int korean, english, math;
	string name;
};

bool compare(const Student &a, const Student &b) {
	if (a.korean != b.korean) {
		return a.korean > b.korean;
	}
	if (a.english != b.english) {
		return a.english < b.english;
	}
	if (a.math != b.math) {
		return a.math > b.math;
	}

	return a.name < b.name;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<Student> students(n);

	for (int i = 0; i < n; i++) {
		cin >> students[i].name >> students[i].korean >> students[i].english >>
			students[i].math;
	}

	sort(students.begin(), students.end(), compare);

	for (const auto &s : students) {
		cout << s.name << "\n";
	}

	return 0;
}