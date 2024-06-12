#include <stdio.h>

int get_volume(int h, int w, int d)
{
    return h * w * d;
}

int main(void)
{
    int height, width, depth, res;
    scanf("%d %d %d", &height, &width, &depth);
    res = get_volume(height, width, depth);
    printf("%d\n", res);

    return 0;
}