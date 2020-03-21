#include <stdio.h>

#define ATIME 10
#define BTIME 2
#define CTIME 1

int answer(int a, int b, int c, int x) {
  int cnt = 0;
  int xd = x / 50;
  for (int ca = 0; ca <= xd / ATIME; ca++) {
    if (ca > a) continue;
    for (int cb = 0; cb <= xd / BTIME; cb++) {
      if (cb > b) continue;
      for (int cc = 0; cc <= xd / CTIME; cc++) {
        if (cc > c) continue;
        int state = xd - ATIME * ca - BTIME * cb - CTIME * cc;
        if (state == 0) {
          cnt++;
        }
      }
    }
  }
  return cnt;
}

int main() {
  int a,b,c,x;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &x);
  printf("%d\n", answer(a,b,c,x));
}
