#include <stdio.h>

int main() {
  // your code here...
  // 1 <= d <= 100
  int ed[100];
  for (int i = 0; i < 100; i++) { ed[i] = 0; }

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int d; scanf("%d", &d);
    ed[d-1] = 1;
  }

  int cnt = 0;
  for (int i = 0; i < 100; i++) {
    if (ed[i] == 1) {
      cnt++;
    }
  }

  printf("%d\n", cnt);
  return 0;
}
