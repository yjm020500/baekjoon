#include <stdio.h>
int arr[1000000];

int main(void) {
	int N;
	scanf("%d", &N);
	

	int i;
	int max = -1000000, min = 1000000;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
		max = (arr[i] > max) ? arr[i] : max;
		min = (arr[i] < min) ? arr[i] : min;
	}
	printf("%d %d", min, max);
	return 0;
}