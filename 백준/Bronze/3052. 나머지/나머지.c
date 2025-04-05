#include <stdio.h>
#define NUM 10

int main(void) {
    int n[NUM];

    int i;
    int input;
    for (i = 0; i < NUM; i++) {
        scanf("%d", &input);
        n[i] = input%42;
    }

    int cnt = 1;
    int j;
    for (i = 0; i < NUM; i++) {
        for (j = 0; j < i; j++) {
            if (i == j) { continue; }
            else if (n[i] == n[j]) { break; }
            else if (j == i-1) {  cnt++; }
        }
    }
    printf("%d", cnt);

    return 0;
}