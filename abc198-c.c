#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// WRONG answer

int main() {
  // your code here...
  int R, X, Y;
  scanf("%d %d %d", &R, &X, &Y);
  double zerolen = hypot((double)X, (double)Y);
  printf("%d\n", (int)ceil(zerolen / R));
  return 0;
}
