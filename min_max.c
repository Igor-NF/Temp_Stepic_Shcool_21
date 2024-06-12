#include <stdio.h>

int main() {
    int num, min, max = 0;
    min = num;
    while (scanf("%d", &num) && num != 0) {

        max = (max < num) ? num : max;
        min = (min > num) ? num : min;
    }
    printf("%d %d", max, min);
    return 0;
}