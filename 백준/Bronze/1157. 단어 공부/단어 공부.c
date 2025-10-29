#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>


int main()
{
    char str[1000002];
    int str_count[26];

    for(int i = 0; i < 26; i++){
        str_count[i] = 0;
    }

    scanf("%s", str);

    int i = 0;

    while(str[i] != '\0'){
        char temp = toupper(str[i]);
        
        str_count[temp-'A']++;

        i++;
    }

    int max = 0;
    int max_cnt = 1;
    for (int i = 1; i < 26; i++)
    {
        if (str_count[i] > str_count[max])
        {
            max = i;
            max_cnt = 1;
        }
        else if (str_count[i] == str_count[max])
        {
            max_cnt++;
        }
    }
    
    if (max_cnt != 1)
    {
        printf("?");
    }
    else {
        printf("%c", max+'A');
    }
    

    return 0;
}