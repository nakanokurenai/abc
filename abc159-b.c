#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  
int isRoudingBun(char *s, int length) {
  for (int i = 0; i < (length / 2); i++) {
    if (s[i] != s[length - 1 - i]) return 1;
  }
  return 0;
}
  
int main() {
  // your code here...
  char kai[100];
  
  scanf("%s", kai);
  
  int len = strlen(kai);
  if (isRoudingBun(kai, len) == 0 && isRoudingBun(kai, (len-1)/2) == 0 && isRoudingBun(&kai[(len+3)/2 - 1], len - (len+3)/2 + 1) == 0) {
    printf("Yes\n");
    return 0;
  }
  
  printf("No\n");
  return 0;
}