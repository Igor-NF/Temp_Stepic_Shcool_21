#include <stdio.h>

int fact(int n)
{
    int res = 1;
    if (n == 0)
        printf("%d", 1);
    if (n < 0)
        printf("%d", -1);
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

int main(void)
{
    int n = 6;
    printf("%d", fact(n));
    return 0;
}