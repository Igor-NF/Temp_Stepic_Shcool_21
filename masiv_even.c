#include <stdio.h>

int main() {
    int dig;
    scanf("%d", &dig);
    int lst[dig];
    
    for (int i = 0; i < dig; ++i) {
        scanf("%d", &lst[i]);
        if (lst[i] % 2 == 0)
            printf("%d ", lst[i]);
    }
    for (int i = 0; i < dig; ++i) {
        if (lst[i] % 2)
            printf("%d ", lst[i]);
    }
    return 0;
}