#include <stdio.h>
#include <string.h>
#include <stdint.h>


int main()
{
    char str[102];
    scanf("%s", str);

    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    int count = i;
    i=0;

    while(1)
    {
        if (str[i] != str[count - i - 1])
        {
            printf("0");
            break;
        }
        else if (i == count - i - 1)
        {
            printf("1");
            break;
        }
        else if ((count%2==0) && (str[i]==str[count - i - 1]) && (i+2==count))
        {
            printf("1");
            break;
        }
        i++;
    }
    

    return 0;
}