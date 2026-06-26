#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int nums[3];
  string order;

  cin >> nums[0] >> nums[1] >> nums[2];
  cin >> order;

  int sorted[3] = {nums[0], nums[1], nums[2]};

  sort(sorted, sorted + 3);

  for (int i = 0; i < 3; i++) {
    if (i > 0)
      cout << " ";

    cout << sorted[order[i] - 'A'];
  }
  cout << endl;

  return 0;
}