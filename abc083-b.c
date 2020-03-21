#include <stdio.h>

int sumDigits(int n) {
  int s = 0;
  while (1) {
    if (n / 10 == 0) {
      s += n;
      break;
    }
    s += n % 10;
    n = n / 10;
  }
  return s;
}

int main() {
  // your code here...
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int r = sumDigits(i);
    if (a <= r && r <= b) {
      sum += i;
    }
  }

  printf("%d\n", sum);

  return 0;
}
