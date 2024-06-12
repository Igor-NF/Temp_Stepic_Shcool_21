#include <stdio.h>

float pows[] = {1, 2, 3, 4, 5};

int main(void)
{
    for (int i = sizeof(pows) / sizeof(*pows) - 1; i >= 0; i--)
        printf("%.1f ", pows[i]);

    return 0;
}