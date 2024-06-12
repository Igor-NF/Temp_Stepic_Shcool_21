#include <stdio.h>

int main() {
    int dig, num;
    scanf("%d", &dig);
    int lst[dig];

    for (int i = 0; i < dig; ++i){
        scanf("%d", &num);
        lst[i] = num;
        if (i >= dig / 2)
            printf("%d ", num);
    }

    for (int j = 0; j < dig / 2; ++j) {
        num = lst[j];
        printf("%d ", num);
    }

    return 0;
}