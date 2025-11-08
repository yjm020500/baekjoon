#include <stdio.h>

int main(void)
{
   char m[100][100];

   for (int i = 0; i < 100; i++)
   {
        for (int j = 0; j < 100; j++)
        {
            m[i][j] = 0;
        }
        
   }
   
   
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        int posx, posy;
        scanf("%d %d", &posx, &posy);

        for (int j = posx; j < (posx+10); j++)
        {
            for (int k = posy; k < (posy+10); k++)
            {
                m[j][k] = 1;
            }
        }
    }
    
    int area=0;

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (m[i][j] == 1)
            {
                area += 1;
            }
        }
    }
    
    printf("%d\n", area);

    return 0;
}
