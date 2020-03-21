#include <stdio.h>

int oneOrNothing(int i) {
  if (i == 1) return 1;
  return 0;
}

int main() {
    int a,b,c;
    scanf("%1d%1d%1d", &a,&b,&c);
    printf("%d\n", oneOrNothing(a)+oneOrNothing(b)+oneOrNothing(c));
}
