#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int N, cont_par = 0, cont_impar = 0, i;
  
  scanf("%d", &N);
  int *vet = (int*)malloc(N* sizeof(int));
  
  for(i = 0; i < N; i++)
    {
      scanf("%d", vet + i);
    }
  
    for(i = 0; i < N; i++)
  {
     if(*(vet + i) % 2 == 0)
    {
      cont_par++;
    }
    else{
      cont_impar++;
    }
  }
 
  printf("%d %d", cont_par, cont_impar);
  free(vet);
  
  return 0;
}

