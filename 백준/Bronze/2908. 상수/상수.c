#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main() 
{
	int A, B;
	scanf("%d %d", &A, &B);

	A = (A / 100) + ((A / 10) % 10) * 10 + (A%10) * 100;
	B = (B / 100) + ((B / 10) % 10) * 10 + (B % 10) * 100;

	if (A > B) printf("%d\n", A);
	else printf("%d\n", B);
}