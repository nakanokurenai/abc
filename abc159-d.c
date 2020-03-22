#include <stdio.h>
#include <stdlib.h>

// TLE

unsigned long kyu(unsigned long n) {
  unsigned long r = n;
  if (r == 0) return r;
  for (unsigned long i = n-1; i != 0; i--) {
    r = r + i;
  }
  return r;
}

int main() {
  // your code here...
  unsigned long n;
  scanf("%lu", &n);

  unsigned long a[n];
  unsigned long cnt[n];

  for (unsigned long i = 0; i < n; i++) {
    cnt[i] = 0;
  }

  for (unsigned long i = 0; i < n; i++) {
    scanf("%lu", &a[i]);
    cnt[a[i]] += 1;
  }

  int count;
  for (unsigned long k = 0; k < n; k++) {
    unsigned long kv = a[k];
    count = 0;
    for (unsigned long j = 0; j < n; j++) {
      if (cnt[j] > 0) {
        if (kv != j) {
          count += kyu(cnt[j] - 1);
        } else if (cnt[j] > 1) {
          count += kyu(cnt[j] - 2);
        }
      }
    }
    printf("%d\n", count);
  }

  return 0;
}
