#include <stdio.h>

int main(void) {
    char str[1000];
    scanf("%s", &str);

    int i;
    scanf("%d", &i);

    printf("%c", str[i-1]);

    
    return 0;
}