#include <stdio.h>
int n[100];

void change_num(int, int);

int main(void) {
    
    int N, M;
    scanf("%d %d", &N, &M);

    int k;
    for (k = 0; k < N; k++) {
        n[k] = k+1;
    }

    int i, j;
    int a;
    for (k = 0; k < M; k++) {
        scanf("%d %d", &i, &j);
        change_num(i-1, j-1);
    }

    for (k = 0; k < N; k++) {
        printf("%d ", n[k]);
    }

    return 0;
}

void change_num(int i, int j) {
    int k, temp;
    for (k = i; k <= ((j-i)/2 )+i; k++) {
        temp = n[k];
        n[k] = n[j - (k - i)];
        n[j - (k - i)] = temp;
    }
}