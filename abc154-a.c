#include <stdio.h>
#include <stdlib.h>

int main() {
  int N;
  scanf("%d", &N);

  long I[N];
  for (long i = 0; i < N; i++) {
    I[i] = 0;
  }

  long a;
  for (int i = 0; i < N; i++) {
    scanf("%ld", &a);
    for (int j = i; j > -1; j--) {
      if (I[j] == a) {
        printf("NO\n");
        return 0;
      }
    }
    I[i] = a;
  }

  printf("YES\n");
  return 0;
}
