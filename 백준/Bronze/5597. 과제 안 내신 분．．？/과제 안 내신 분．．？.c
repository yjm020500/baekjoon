#include <stdio.h>
#define NUM 30
#define DONE 28

int main(void) {
    int people[NUM] = {0};

    int i;
    int input;
    for (i = 0; i < DONE; i++) {
        scanf("%d", &input);
        people[input-1] = 1;
    }

    for (i = 0; i < NUM; i++) {
        if (!people[i]) {
            printf("%d\n", i+1);
        }
    }

    return 0;
}