#include <stdio.h>

void reset_str(int input);

char str[1000];

int main(void) {
    

    int T;
    scanf("%d", &T);
    
    int i, j;
    char first, last;
    for (i = 0; i < T; i++) {
        j = 0;
        scanf("%s", &str);
        first = str[0];
        while (str[j] != 0) {
            j++;
        }
        last = str[j-1];
        printf("%c%c ", first, last);
        reset_str(j);
    }

    return 0;
}

void reset_str(int input) {
    int i;
    for (i = 0; i <= input; i++) {
        str[i] = 0;
    }
}