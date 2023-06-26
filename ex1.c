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
        printf("%p\n", &a);
        printf("O endereco de a eh maior que b\n");
    }
    else
    {
        printf("%p\n", &b);
        printf("O endereco de b eh maior que de a\n");
    }

    return 0;
}

