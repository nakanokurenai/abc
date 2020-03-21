#include <stdio.h>
#include <stdlib.h>

int startWith(char *expected, char *actual) {
  for (int i = 0; expected[i] != '\0'; i++) {
    if (actual[i] == '\0') return -1;
    if (actual[i] != expected[i]) return -1;
  }
  return 0;
}

int startWithCandidate(char *s) {
  switch (s[0]) {
    case 'd': {
      if (startWith("ream", &s[1]) == -1) {
        return -1;
      }
      // 引数順間違えて一時爆散していた
      // これは eracer かもしれないのでそのチェック
      if (startWith("er", &s[5]) == 0 && startWith("era", &s[5]) == -1) {
        return 7;
      }
      return 5;
    }
    case 'e': {
      if (startWith("rase", &s[1]) == -1) {
        return -1;
      }
      if (s[5] == 'r') {
        return 6;
      }
      return 5;
    }
  }
  return -1;
}

int main() {
  // your code here...
  char *s;
  s = (char *) malloc(10*10*10*10*10+1);

  scanf("%s", s);

  if (s[1] == '\0') {
    printf("YES\n");
    return 0;
  }

  int r = -1;
  unsigned long i = 0;
  while (s[i] != '\0') {
    r = startWithCandidate(&s[i]);
    if (r == -1) {
      break;
    }
    i = i+r;
  }

  free(s);
  printf("%s\n", r == -1 ? "NO" : "YES");
  return 0;
}
