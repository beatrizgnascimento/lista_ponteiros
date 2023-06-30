#include <stdio.h>

double media_calculo(double *array, int casas);

int main()
{
    int N, i;
    double *p = NULL;

    scanf("%d", &N);

    double vet[N];

    for(i = 0; i < N; i++)
    {
        scanf("%lf", &vet[i]);
    }

    p = vet;

    double media = media_calculo(p, N);

    printf("%.2lf", media);

    return 0;
}

double media_calculo(double *array, int casas)
{
    int i;
    double soma = 0;
    for(i = 0; i < casas; i++)
    {
        soma = soma + array[i];
    }

    return soma / casas;
}
