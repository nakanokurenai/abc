#include <stdio.h>
#include <stdlib.h>

int main() {
  // your code here...
  float l;
  scanf("%f", &l);

  if (l/3 < 1) {
    if (l > 2) {
      printf("%f\n", l-2.0);
      return 0;
    }
    if (l > 1) {
      printf("%f\n", ((l-2.0)/2.0)*((l-2.0)/2.0));
      return 0;
    }
  }

  printf("%f\n", (l/3.0)*(l/3.0)*(l/3.0));
  return 0;
}
