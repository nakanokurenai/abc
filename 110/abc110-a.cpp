#include <iostream>
#include <algorithm>

using namespace std;

int main () {
  int n[3];
  cin >> n[0];
  cin >> n[1];
  cin >> n[2];

  sort(n, n+3);

  cout << n[2] * 10 + n[1] + n[0] << endl;

  return 0;
}
