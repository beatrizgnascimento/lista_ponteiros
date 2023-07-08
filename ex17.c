#include <stdio.h>
#include <stdlib.h>

int main()
{
  int L, C, i, j;

  printf("Digite o numero de linhas e de colunas:\n");
  scanf("%d %d", &L, &C);

  int **x = (int **)malloc(L * sizeof(int *));
  x[0] = (int *)malloc(L * C * sizeof(int));

  for(i = 0; i < L; i++)
  {
    x[i] = (int *)malloc(C * sizeof(int));

  }

  for (i = 1; i < L; i++)
  {
    x[i] = x[i-1] + C;
  }

  printf("Digite os valores da matriz:\n");
  for(i = 0; i < L; i++)
    {
      for(j = 0; j < C; j++)
        {
          scanf("%d", &x[i][j]);
        }
    }

  printf("Matriz X:\n");
  for(i = 0; i < L; i++)
    {
      for(j = 0; j < C; j++)
        {
          printf("%d ", x[i][j]);
        }
        printf("\n");
    }

  printf("Matriz Transposta:\n");
  for(i = 0; i < C; i++)
    {
      for(j = 0; j < L; j++)
        {
          printf("%d ", x[j][i]);
        }
        printf("\n");
    }
  


 
free(x[0]);
free(x);
  
  return 0;
}
