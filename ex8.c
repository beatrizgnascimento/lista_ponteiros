#include <stdio.h>
void troca(int *a, int *b);

int main()
{
    int vet[10];
    int *maior = NULL, *menor = NULL, *segundomaior = NULL, *segundomenor = NULL;
    int i;
    
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    maior = segundomaior = &vet[0];
    menor = segundomenor = &vet[0];
    
    for(i = 0; i < 10; i++)
    {
        if(vet[i] > *maior)
        {
            segundomaior = maior;
            maior = &vet[i];
        }
        else if(vet[i] > *segundomaior)
        {
            segundomaior = &vet[i];
        }
    }
    
    for(i = 0; i < 10; i++)
    {
        if(vet[i] < *menor)
        {
            segundomenor = menor;
            menor = &vet[i];
        }
        else if(vet[i] < *segundomenor)
        {
            segundomenor = &vet[i];
        }
    }
    
    troca(segundomaior, segundomenor);
    
    for(i = 0; i < 10; i++)
    {
        printf("%d \n", vet[i]);
    }
    return 0;
}

void troca(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
