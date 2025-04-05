#include <stdio.h>

int main(void) {
    int N, M;
    int basket[100];
    scanf("%d %d", &N, &M);

    int l, a;

    for (l = 1; l <= N; l++) {
        basket[l] = 0;
    }

    int i, j, k;

    for (l = 1; l <= M; l++) {
        scanf("%d %d %d", &i, &j, &k);
        for (a = i; a <= j; a++) {
            basket[a] = k;
        }
    }

    for (l = 1; l <= N; l++) {
        printf("%d ", basket[l]);
    }

    return 0;
}