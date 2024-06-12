#include <stdio.h>
#include <math.h>

int main() {
    int num, dig, cnt = 0;
    scanf("%d", &dig);
    int lst[dig];
    
    for (int i = 0; i < dig; ++i) {
        scanf("%d", &num);
        lst[i] = abs(num);
    }

    for (int i = 0; i < dig / 2; ++i) {
        if (lst[i] == lst[dig - 1 - i]) 
            ++cnt;   
    }

        printf((cnt == (dig / 2)) ? "YES" : "NO");
    
    return 0;
}