#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    int loop;
    scanf("%d", &loop);
    while(loop!=0){
        int times;
        char str[25];
        scanf("%d", &times);
        scanf(" %s", str);
        for (int i = 0; i < strlen(str); i++)
        {
            for (int j = 0; j < times; j++)
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
        
        
        loop--;
    }
    
    return 0;
    
}