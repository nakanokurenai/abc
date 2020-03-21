#include <stdio.h>

int main() {
  // your code here...
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i=0;i<n;i++) { scanf("%d", &a[i]); }

  int scoreboard[2] = {0,0};
  for (int i=0;i<n;i++) {
    int max = 0;
    int maxPos = -1;
    for (int j=0;j<n;j++) {
      if (max < a[j]) {
        max = a[j];
        maxPos = j;
      }
    }
    if (maxPos == -1) break;
    a[maxPos] = 0;
    scoreboard[i%2] += max;
  }

  printf("%d\n", scoreboard[0] - scoreboard[1]);
  return 0;
}
