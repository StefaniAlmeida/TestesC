#include <stdio.h>
int main()
{
  int fatorial;
  int resposta = 1;
  
  printf("Digite um número:");
  scanf("%i", &fatorial);
  
  for( ; fatorial >= 1; fatorial = fatorial - 1) {
    resposta = resposta * fatorial;
    
  }
  
  printf("O fatorial desse número é: %i", resposta);
  
  
  return 0;
}