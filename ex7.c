#include <stdio.h>

int main()
{
    int vet[10], i;
    int *p = NULL;
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    
    p = vet;
    
    for(i = 0; i < 10; i++)
    {
        if(*p % 2 == 0)
        {
            *p = *p + 1;
        }
        else
        {
            *p = *p * 2;
        }
        p++;
    }
    
    p = vet;//resetar o ponteiro para atender as mudancas

    for(i = 0; i < 10; i++) //usop do loop para imprimir os valores corretamentes do vetor armazenado em p
    {
        printf("%d ", *p);
        p++;
    }
  
    
    
    
    return 0;
}
