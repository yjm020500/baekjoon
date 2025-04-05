#include <stdio.h>

int main(void) {
    int N, M;
    int basket[100];
    scanf("%d %d", &N, &M);

    int k;
    for (k = 1;k <= N; k++) {
        basket[k] = k;
    }

    int i,j;
    int temp;

    for (k = 1; k <= M; k++) {
        scanf("%d %d", &i, &j);
        temp = basket[i];
        basket[i] = basket[j];
        basket[j] = temp;
    }

    for (k = 1; k <= N; k++) {
        printf("%d ", basket[k]);
    }

    return 0;
}