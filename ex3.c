#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    
    printf("Digite os valores para a, b e c\n");
    scanf("%d %f %c", &a, &b, &c);
    
    int *p_a = NULL;
    float *p_b = NULL;
    char *p_c = NULL;
    
    p_a = &a;
    p_b = &b;
    p_c = &c;
    
    printf("Valores iniciais: %d %.2f %c", a, b, c);
    
    
    //Modificar valores usando ponteiros
    
    printf("Digite os novos valores:\n");
    scanf("%d", p_a); //para escanear conteudo do ponteiro nao precisa de &
    scanf("%f", p_b);
    scanf(" %c", p_c);
    
    printf("Novos valores: %d %.2f %c\n", *p_a, *p_b, *p_c);

    return 0;
}
