#include <stdio.h>

int main(void)
{
    int n, num = 1, next = 1, res = 0;
    scanf("%d", &n);
    if (n == 1 || n == 2) {
        printf("1\n");
        return 0;}
    for (int i = 3; i <= n; ++i){
        res = num + next;
        num = res - num;
        next = res;
               
    }
    printf("%d\n", res);
    return 0;
}
// 1 2 3 4 5 6  7  8  9
// 1 1 2 3 5 8 13 21 34