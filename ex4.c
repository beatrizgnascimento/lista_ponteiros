#include <stdio.h>

int main()
{
    int vet[10];
    int i;
    int *p = NULL;
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
          
    }
    
   p = vet;
  
    for(i = 0; i < 10; i++)
    {
        printf("%p %d", p, *p);
        p++;
    }

    return 0;
}
