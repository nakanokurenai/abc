#include <stdio.h>
#include <stdlib.h>

// abc086-c
// ある点からある点への最短移動時間は x,y それぞれ 1ずつ動かずために |dt| + |dy| である
// この上に余計なステップとしてその場に戻ってくる周期を加えると 2i (i は任意の整数) ステップを加えることができる

int isAbleToGoPoint(
  unsigned long currentTime,unsigned long fromX,unsigned long fromY,
  unsigned long atTime,unsigned long pointX, unsigned long pointY) {
  unsigned long mustRequireStep = labs(pointX - fromX) + labs(pointY - fromY);
  if (mustRequireStep > (atTime - currentTime)) {
    return -1;
  }
  if ((atTime - currentTime - mustRequireStep) % 2 != 0) {
    return -1;
  }
  return 0;
}

int main() {
  // your code here...

  unsigned long n;
  if (scanf("%lu", &n) == EOF) {
    return 1;
  };

  unsigned long ct = 0, cx = 0, cy = 0;
  for (unsigned long i = 0; i < n; i++) {
    unsigned long t, tx, ty;
    if (scanf("%lu %lu %lu", &t, &tx, &ty) == EOF) {
      return 1;
    }
    if (isAbleToGoPoint(ct, cx, cy, t, tx, ty) != 0) {
      printf("No\n");
      return 0;
    }
    ct = t; cx = tx; cy = ty;
  }

  printf("Yes\n");
  return 0;
}
