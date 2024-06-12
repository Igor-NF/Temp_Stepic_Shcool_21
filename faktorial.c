#include <stdio.h>

int main() {
    int k, fakt = 1;
    scanf("%d", &k);
    if (k >= 0 && k <= 12)
        for (int i = 1; i <= k; i++)
            fakt *= i;
    printf("%d\n", fakt);
    return 0;
}