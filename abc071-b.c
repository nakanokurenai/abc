#include <stdio.h>
#include <stdlib.h>

int main() {
  // your code here...
  char s[100000];
  scanf("%s", s);

  unsigned int allbit = 0;
  unsigned int bit = 0;
  for (unsigned int i = 0; s[i] != '\0'; i++) {
    bit = 1;
    bit = bit << (s[i] - 0x61);
    allbit = allbit | bit;
  }

  unsigned int expected_all = 0;
  for (unsigned int i = 0; i < 26; i++) {
    bit = 1;
    bit = bit << i;
    expected_all = expected_all | bit;
  }

  if (allbit == expected_all) {
    printf("None\n");
    return 0;
  }

  for (int i = 0; i < 26; i++) {
    if ((~allbit >> i) & 0x1) {
      printf("%c\n", i + 0x61);
      break;
    }
  }

  return 0;
}
