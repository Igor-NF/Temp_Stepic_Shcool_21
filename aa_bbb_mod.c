#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; ++i)
        for (int j = i; j > 0; j--)
            printf("%5d", i);

    return 0;
}