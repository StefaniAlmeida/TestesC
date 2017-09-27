#include <stdio.h>

int main()
{
  char vetor[100];
  int contador, numero;
  
 
  scanf("%i", &numero);
  
  while (numero > 0){
    scanf("%s", vetor);
    for (contador = numero - 1; contador >= 0; contador--){
      printf("%c", vetor[contador]);
    }
    printf("\n");
    scanf("%i", &numero);
  }
  return 0;
}