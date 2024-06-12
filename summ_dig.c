#include <stdio.h>

int main() {
    int num, res = 0;
  while ( scanf("%d", &num) && num != 0)
    res += num;
  printf("%d ", res);

  return 0;
}