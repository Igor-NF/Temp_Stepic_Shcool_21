#include <stdio.h>

int main() {
    int dig, cnt = 0;
    scanf("%d", &dig);
    int lst[dig];
    
    for (int i = 0; i < dig; ++i)
        scanf("%d", &lst[i]);
    for (int i = 0; i < dig; ++i)  
        if (lst[i] < lst[dig - 1]) {
            cnt += printf("%d ", lst[i]);
        }
    if (!cnt)
        printf("0");

    return 0;
}