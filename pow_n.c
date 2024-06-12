#include <stdio.h>
#include <math.h>

int pow_n(int n, int m)
{
    int res = 1;
    if (m == 0)
        return 1;
    for (int i = 0; i < m; i++)
        res *= n;
    return res;
}

int main(void)
{
    printf("%d\n", pow_n(2, 4));
    return 0;
}