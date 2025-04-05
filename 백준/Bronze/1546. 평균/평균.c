#include <stdio.h>
int arr[1000];

int main(void) {

    int N, M = 0;
    scanf("%d", &N);

    int i;
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > M) {
            M = arr[i];
        }
    }

    double avg = 0;

    for (i = 0; i < N; i++) {
        avg += (arr[i]*100 / (float)(M));
    }

    avg = avg / N;
    printf("%f", avg);
    
    return 0;
}