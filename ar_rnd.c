#include <stdio.h>

int main(void)
{
    int x;
    short ar_rnd[64] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%d ", &x);
        ar_rnd[i] = x;
        printf("%d, ", x);
    }
    
    return 0;
}