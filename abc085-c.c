#include <stdio.h>

#define A_MONEY 1000
#define A_TIMES 1
#define B_TIMES 5
#define C_TIMES 10

int isOsatuable(int expectedBillCount, int expectedMoney, int *usedMoney) {
  int m = expectedMoney / A_MONEY;
  // A, B, C の札を順に使う
  for (int a = 0; a <= expectedBillCount; a++) {
    for (int b = 0; b <= (expectedBillCount - a); b++) {
      for (int c = 0; c <= (expectedBillCount - a - b); c++) {
        if ((a+b+c) != expectedBillCount) continue;
        if ((a + b * B_TIMES + c * C_TIMES) == m) {
          usedMoney[0] = a;
          usedMoney[1] = b;
          usedMoney[2] = c;
          return 0;
        }
      }
    }
  }
  return -1;
}

int main() {
  // your code here...
  int n, y, osatu[3];
  scanf("%d %d", &n, &y);

  if (isOsatuable(n, y, &osatu) == -1) {
    printf("-1 -1 -1\n");
  } else {
    printf("%d %d %d\n", osatu[2], osatu[1], osatu[0]);
  }
  return 0;
}
