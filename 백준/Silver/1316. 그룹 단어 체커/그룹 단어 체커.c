#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>


int main()
{
    char str[102];
    int count=0;
    int group;
    int j;
    char prev;
    int ans = 0;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%s", str);
        int temp[26] = {0};
        group=1;
        j=0;
        prev=0;

        while (str[j] != '\0')
        {
            if (prev != str[j])
            {
                if (!temp[str[j]-'a'])
                {
                    temp[str[j]-'a'] = 1;
                }
                else
                {
                    group = 0;
                    break;
                }
                
            }
            prev = str[j];
            j++;
        }
        if (group)
        {
            ans++;
        }
        
    }

    printf("%d\n", ans);

    return 0;
}