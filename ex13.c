#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int *loteria;
  int *aposta, *vet;
  int i, j, num_acertos = 0;
  srand(time(NULL));

  loteria = (int *)malloc(15 * sizeof(int));
  aposta = (int *)malloc(15 * sizeof(int));
  vet = (int *)malloc(15 * sizeof(int));

  if (vet == NULL || aposta == NULL || loteria == NULL) {
    printf("Falha na alocação de memória.\n");
    exit(1);
  }

  for (i = 0; i < 15; i++) {
    loteria[i] = 1 + rand() % 25;
  }

  printf("Digite os numeros apostados:\n");
  for (i = 0; i < 15; i++) {
    scanf("%d", aposta + i);
  }

  printf("Numeros sorteados:\n");
  for (i = 0; i < 15; i++) {
    printf("%d\n", loteria[i]);
  }

  for (i = 0; i < 15; i++) {
    for (j = 0; j < 15; j++) {
      if (aposta[i] == loteria[j]) {
        num_acertos++;
        break;
      }
    }
  }

  int posicao_vet = 0;

  for (i = 0; i < 15; i++) {
    for (j = 0; j < 15; j++) {
      if (aposta[i] == loteria[j]) {
        vet[posicao_vet] = aposta[i];
        posicao_vet++;
        break;
      }
    }
  }

  printf("Numeros acertados");
  for (i = 0; i < num_acertos; i++) {
    printf("%d\n", vet[i]);
  }

  free(vet);
  free(loteria);
  free(aposta);

  return 0;
}
