#include <stdio.h>

int main(void) {
    unsigned long long int a,b,c;
    scanf("%llu %llu %llu", &a, &b, &c);

    printf("%llu", a+b+c);
}