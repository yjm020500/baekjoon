#include <stdio.h>

int main(void) {
    int i;
    int arr[10];
    for (i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }
    
    int max = 0;
    int position;
    for (i = 0; i < 9; i++) {
        if (max < arr[i]) {
            max = arr[i];
            position = i;
        }
    }
    printf("%d\n", arr[position]);
    printf("%d", position+1);
    return 0;
}