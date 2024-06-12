#include <stdio.h>

int main() {
  int num, dig;
  scanf("%d", &dig);
  int lst[dig];

  for (int i = 0; i < dig; ++i) {
      scanf("%d", &num);
      lst[i] = num;
  }
  for (int i = dig - 1; i >= 0; --i)
       printf("%d ", lst[i]); 
           
  return 0;
}