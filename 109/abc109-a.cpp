#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a;
  cin >> b;

  for (int c = 1; 4 > c; c++) {
    if (0 != ((a * b * c) % 2)) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
