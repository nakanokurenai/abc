#include <stdio.h>
#include <stdlib.h>

int kodakumi(int a) {
  int r = 0;
  if (a < 2) return 0;
  for (int i = a; i != 1; i--) {
    r += (i-1);
  }
  return r;
}

int main() {
  // your code here...
  int n,m;
  scanf("%d %d", &n, &m);

  printf("%d\n", (kodakumi(n) + kodakumi(m)));
  return 0;
}
