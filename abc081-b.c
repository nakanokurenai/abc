#include <stdio.h>

int main() {
  int n, cnt = 0;
  scanf("%d", &n);

  unsigned long kokuban[n];
  for (int i = 0; i < n; i++) {
    scanf("%ld", &kokuban[i]);
  }

  while (1) {
    for (int i = 0; i < n; i++) {
      if (kokuban[i] & 0x1) {
        printf("%d\n", cnt);
        return 0;
      }
    }
    for (int j = 0; j < n; j++) {
      kokuban[j] = kokuban[j] >> 1;
    }
    cnt++;
  }
}
