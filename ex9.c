#include <stdio.h>

void selection_sort(int num[], int tam);  


int main()
{
    int vet[5];
    int *p = NULL;
    int i;
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d ", &vet[i]);
    }
    
    selection_sort(vet, 5);
    p = vet;
    
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p++;
    }
    
    return 0;
}

void selection_sort(int num[], int tam)  
{  
  int i, j, min, temp; 
  for (i = 0; i < (tam-1); i++)
   { 
    min = i; 
    for (j = (i+1); j < tam; j++) { 
      if(num[j] < num[min]) { 
        min = j; 
      } 
    } 
    if (i != min) { 
      temp = num[i]; 
      num[i] = num[min]; 
      num[min] = temp; 
    } 
  } 
}
