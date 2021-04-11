#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool pali(size_t len, char *n) {
  int j = 0;
  bool rz = true;
  int cnt = 0;
  for (int i = len-1; i > -1 && i >= j; i--) {
//    printf("%c (%d) ?= %c (%d). %d of %zu\n", n[j], j, n[i], i, cnt, len);
    if (i == j) {
      return true;
    }
    if (n[i] == n[j]) {
      cnt+=2;
      j++;
      if (n[i] != '0') {
        rz = false;
      }
      continue;
    }
    if (rz && n[i] == '0') {
      cnt++;
      continue;
    }
    return false;
  }

  if (cnt == len) {
    return true;
  }
  return false;
}

int main() {
  char N[11];
  scanf("%s", N);
  if (pali(strlen(N), N)) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
