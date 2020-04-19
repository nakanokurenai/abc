#include <stdio.h>
#include <stdlib.h>

int main() {
  // your code here...
  long N = 0, M = 0;
  scanf("%ld %ld", &N, &M);

  long A_ALL = 0;
  for (long a, i = 0; i < M; i++) {
    scanf("%ld", &a);
    A_ALL += a;
  }

  if (A_ALL > N) {
    printf("-1\n");
    return 0;
  }

  printf("%ld\n", N-A_ALL);
  return 0;
}
