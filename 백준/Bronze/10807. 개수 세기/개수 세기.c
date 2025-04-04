#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	int arr[100];

	int i;
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int v, num = 0;
	scanf("%d", &v);

	for (i = 0; i < N; i++) {
		if (arr[i] == v) {
			num++;
		}
	}

	printf("%d", num);

	return 0;
}