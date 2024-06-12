#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a, cnt = 1; i <= b; ++i, cnt++)
        for (int j = 0; j < cnt; j++)
            printf("%-5d", i);

    return 0;
}