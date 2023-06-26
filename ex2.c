#include <stdio.h>

int main()
{
    int a, b;
    int *x = NULL, *y = NULL;
    
    printf("Digite os valores de a e b\n");
    scanf("%d %d", &a, &b);
    
    x = &a;
    y = &b;
    
    if(&a > &b)
    {
       
        printf("Conteduo de a: %d\n", *x);
    }
    else
    {
        
        printf("Conteudo de b: %d\n", *y);
    }

    return 0;
}
