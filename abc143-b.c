#include <stdio.h>
#include <stdlib.h>

int main() {
  // your code here...
  int N;
  scanf("%d", &N);

  int D[N];

  for (int i = 0; i < N; i++) {
    scanf("%d", &D[i]);
  }

  int sum = 0, k;
  for (int i = 0; i < N; i++) {
    k = 0;
    for (int j = i; j < N; j++) {
      if (i == j) continue;
      k += D[j];
    }
    sum += D[i] * k;
  }

  printf("%d\n", sum);
  return 0;
}
