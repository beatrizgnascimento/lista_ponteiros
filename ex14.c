#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cadastro {
  int matricula;
  char nome[100];
  char data[11];
  char dia[3];
  char mes[3];
  char ano[5];
  int diaInt;
  int mesInt;
  int anoInt;
} cadastro;

int main(void) {
  int N, i;
  char maisVelho[100], maisNovo[100];
  
  scanf("%d", &N);
  cadastro *vet = (cadastro*)malloc(N * sizeof(cadastro));
  
  for(i = 0; i < N; i++) 
  {
    printf("Digite os dados do aluno [%d]\n", i + 1);
    scanf("%d", &vet[i].matricula);
    scanf(" %[^\n]", vet[i].nome);
    scanf(" %[^\n]", vet[i].data);
  }
  //(vet + i)->campo permite acessar elementos individuais do array quando vet é um ponteiro
  //tambem pode usar vet[i].campo

  for(i = 0; i < N; i++) 
  {
    sscanf(vet[i].data, "%2s%2s%4s", vet[i].dia, vet[i].mes, vet[i].ano);
    vet[i].diaInt = atoi(vet[i].dia);
    vet[i].mesInt = atoi(vet[i].mes);
    vet[i].anoInt = atoi(vet[i].ano);
  }

  strcpy(maisVelho, vet[0].nome);
  strcpy(maisNovo, vet[0].nome);

  for(i = 1; i < N; i++) 
  {
    if (vet[i].anoInt < vet[i-1].anoInt || 
       (vet[i].anoInt == vet[i-1].anoInt && vet[i].mesInt < vet[i-1].mesInt) ||
       (vet[i].anoInt == vet[i-1].anoInt && vet[i].mesInt == vet[i-1].mesInt && vet[i].diaInt < 
        vet[i-1].diaInt)) 
    {
      strcpy(maisVelho, vet[i].nome);
    }

    if (vet[i].anoInt > vet[i-1].anoInt || 
       (vet[i].anoInt == vet[i-1].anoInt && vet[i].mesInt > vet[i-1].mesInt) ||
       (vet[i].anoInt == vet[i-1].anoInt && vet[i].mesInt == vet[i-1].mesInt && vet[i].diaInt >         vet[i-1].diaInt)) 
    {
      strcpy(maisNovo, vet[i].nome);
    }
  }

  printf("Aluno mais velho: %s\n", maisVelho);
  printf("Aluno mais novo: %s\n", maisNovo);

  free(vet);
  
  return 0;
}
