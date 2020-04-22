#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, Q;
  long K;
  scanf("%d %ld %d", &N, &K, &Q);

  long A[N];
  for (int i = 0; i < N; i++) {
    A[i] = 0;
  }

  int a;
  for (int i = 0; i < Q; i++) {
    scanf("%d", &a);
    A[a-1] += 1;
  }

  for (int i = 0; i < N; i++) {
    if ((K-Q+A[i]) > 0) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }

  return 0;
}
