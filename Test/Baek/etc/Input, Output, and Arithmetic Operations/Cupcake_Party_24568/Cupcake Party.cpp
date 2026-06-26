#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int R, S;
  cin >> R >> S;

  cout << 8 * R + 3 * S - 28;
}