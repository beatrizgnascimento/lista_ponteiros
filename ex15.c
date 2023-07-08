#include <stdio.h>
#include <stdlib.h>

int main()
{
  int L, C, i, j, *num = NULL, contem = 0;

  num = (int*)malloc(1 * sizeof(int));

  if(!num)
  {
    printf("Falha na alocacao de memoria");
    exit(1);
  }

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

  printf("Digite o valor de um numero\n");
  for(i = 0; i < 1; i++)
  {
      scanf("%d", &num[i]);
  }

  for(i = 0; i < L; i++)
    {
      for(j = 0; j < C; j++)
        {
          if(p[i][j] == num[i])
          {
            contem = num[i];
            break;
          }
    }
}  

  if(contem)
  {
    printf("O numero %d esta na matriz\n", contem);
  }
  if(!contem)
  {
    printf("O numero nao esta na matriz\n");
  }

free(p[0]);
free(p);
free(num);
  
  return 0;
}
