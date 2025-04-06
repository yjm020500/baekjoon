#include <stdio.h>

int main(void) {
    char str[100];
    scanf("%s", &str);

    int i = 0, cnt = 0;
    while (str[i] != 0) {
        cnt++;
        i++;
    }

    printf("%d", cnt);

    
    return 0;
}