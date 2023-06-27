
#include <stdio.h>

int main()
{
    int vet[10];
    int *p = NULL;
    int i;
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
         
    }
    
    printf("Vetor antes da mudanca:\n");
    for(i = 0; i < 10; i++)
    {
       
         printf("%d\n", vet[i]);
    }
   
    
    p = vet;
    
    printf("Vetor somado a 1: %d\n", *p + 1);
    for(i = 0; i < 10; i++)
    {
        printf("%d\n",*p + 1);
        p++;
    }
    
    return 0;
}
