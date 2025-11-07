#include <stdio.h>

int main(void)
{
    int m_A[9][9];

   for (int i = 0; i < 9; i++)
   {
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &m_A[i][j]);
        }
   }

   int max_x=0; 
   int max_y=0;
   int max_val = m_A[0][0];
   
   for (int i = 0; i < 9; i++)
   {
        for (int j = 0; j < 9; j++)
        {
            if (max_val < m_A[i][j])
            {
                max_val = m_A[i][j];
                max_x = i;
                max_y = j;
            }
        }
   }

   printf("%d\n", max_val);
   printf("%d %d", max_x+1, max_y+1);

    return 0;
}
