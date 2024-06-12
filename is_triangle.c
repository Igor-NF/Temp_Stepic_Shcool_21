#include <stdio.h>

int is_triangle(int a, int b, int c)
{
    if (a >= b + c) return 0;
    if (b >= a + c) return 0;
    if (c >= a + b) return 0;
    return 1;
}

int main(void)
{
    int a, b, c, res;
    scanf("%d %d %d", &a, &b, &c);
    res = is_triangle(a, b, c);
    printf("%d\n", res);

    return 0;
}