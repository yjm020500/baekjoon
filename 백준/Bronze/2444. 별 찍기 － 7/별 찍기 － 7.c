#include <stdio.h>
#include <string.h>
#include <stdint.h>


int main()
{
    int count;
    int star_count = 1;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star_count; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i != count - 1)
        {
            star_count = star_count + 2;
        }
    }

    star_count = star_count - 2;

    for (int i = count-1; i > 0; i--)
    {
        for (int j = 0; j < count - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star_count; j++)
        {
            printf("*");
        }
        printf("\n");

        star_count = star_count - 2;
    }
    
    

    return 0;
}