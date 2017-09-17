#include <stdio.h>
//Teste de repetição usando for.
int main()
{
  int cont;
  int idade;
  for(cont = 1; cont <= 5; cont = cont +1) {
    printf("Digite sua idade: ");
    scanf("%i", &idade);
      if (idade < 18){
      printf("Voçe é menor de idade!\n");
      printf("\n");
      
      }
      else{
      printf("Voçe é maior de idade!\n");
      printf("\n");
      }
      
      
    
  }
  return 0;
}
