#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main()
{
	char lecture[52];
	double credit;
	double total_credit = 0;
	char grade[4];
	double grade_num = 0;

	for (int i = 0; i < 20; i++)
	{
		scanf("%s", lecture);
		scanf("%lf", &credit);
		scanf("%s", grade);
		if (strcmp(grade, "P"))
		{
			total_credit += credit;
		}
		
		if (strcmp(grade, "A+") == 0) { grade_num += credit * 4.5; }
		else if (strcmp(grade, "A0") == 0) { grade_num += credit * 4.0; }
		else if (strcmp(grade, "B+") == 0) { grade_num += credit * 3.5; }
		else if (strcmp(grade, "B0") == 0) { grade_num += credit * 3.0; }
		else if (strcmp(grade, "C+") == 0) { grade_num += credit * 2.5; }
		else if (strcmp(grade, "C0") == 0) { grade_num += credit * 2.0; }
		else if (strcmp(grade, "D+") == 0) { grade_num += credit * 1.5; }
		else if (strcmp(grade, "D0") == 0) { grade_num += credit * 1.0; }
	}

	printf("%lf\n", grade_num / total_credit);
}