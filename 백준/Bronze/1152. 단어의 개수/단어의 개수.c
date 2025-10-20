#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() 
{
	char str[1000002];
	int i = 0;

	int post = 0;
	int cur = 0;

	int word_cnt = 0;

	//scanf("%s", str);
	if (!fgets(str, sizeof(str), stdin)) return 0;

	while (str[i] != '\0') 
	{
		if ((str[i] != '\n') && (str[i] != ' ')) cur = 1;
		else cur = 0;

		if ((!post) && cur) word_cnt++;

		post = cur;
		i++;
	}

	printf("%d\n", word_cnt);
}