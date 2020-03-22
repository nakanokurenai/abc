#include <stdio.h>
#include <stdlib.h>

int main() {
  int n; scanf("%d", &n);
  int c[n];
  for (int i = 0; i<n; i++) { c[i] = 0; }
  int a[n];
  for (int i = 0; i < n; i++) { scanf("%d", &a[i]); c[a[i]-1] += 1; }

  long all = 0;
  long comb[n];
  for (int i = 0; i < n; i++) {
    comb[i] = 0;
    if (c[i] > 0) {
      comb[i] = (long)(c[i]) * (long)(c[i]-1) / 2;
      all += comb[i];
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%ld\n", all - c[a[i]-1]+1);
  }
  return 0;
}
