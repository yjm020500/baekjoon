#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	int i, sum=0;
	for (i = 0; i < n; i++) {
		sum += (i + 1);
	}
	printf("%d",sum);
	return 0;
}