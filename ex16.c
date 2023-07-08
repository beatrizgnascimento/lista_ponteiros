#include <stdio.h>
#include <stdlib.h>

int main()
{
  int L, C, i, j;

  printf("Digite o numero de linhas e de colunas:\n");
  scanf("%d %d", &L, &C);

  int **p = (int **)malloc(L * sizeof(int *));
  p[0] = (int *)malloc(L * C * sizeof(int));

  for(i = 0; i < L; i++)
  {
    p[i] = (int *)malloc(C * sizeof(int));

  }

  for (i = 1; i < L; i++)
  {
    p[i] = p[i-1] + C;
  }

  printf("Digite os valores da matriz:\n");
  for(i = 0; i < L; i++)
    {
      for(j = 0; j < C; j++)
        {
          scanf("%d", &p[i][j]);
        }
    }

  for(i = 0; i < L; i++)
    {
      for(j = 0; j < C; j++)
        {
          printf("%d ", p[i][j]);
        }
        printf("\n");
    }

  int maior = p[0][0], menor = p[0][0];


  for(i = 0; i < L; i++)
    {
      for(j = 0; j < C; j++)
        {
          if(p[i][j] > maior)
          {
            maior = p[i][j];
          }
          if(p[i][j] < menor)
          {
            menor = p[i][j];
          }
        }
    }

  printf("Maior = %d\nMenor = %d\n", maior, menor);
 
free(p[0]);
free(p);
  
  return 0;
}
