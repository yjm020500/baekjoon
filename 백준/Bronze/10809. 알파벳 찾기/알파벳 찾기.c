#include <stdio.h>

int main(void) 
{
	char S[100];
	scanf("%s", &S);

	char i;
	int j=0, flag=0;
	for (i = 'a'; i <= 'z'; i++) {
		while (S[j] != 0) {
			if ((!flag) && (S[j] == i)) {
				flag++;
				printf("%d ", j);
			}
			j++;
		}
		if (!flag) {
			printf("%d ", -1);
		}
		flag = 0;
		j = 0;
	}
}