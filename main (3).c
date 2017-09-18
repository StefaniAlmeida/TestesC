#include <stdio.h>
int main()
{
  int idade;
  int contador = 1;

  for (contador = 1; contador <=10; contador++) {
    printf("\n");
    printf("Informe a sua idade:\n");
  scanf("%d", &idade);
  
  if (idade < 18)
    printf("Voçe é menor de idade!\n");
    
  else if (idade >= 18)
    printf("Voçe é maior de idade!\n");
  
  else if (idade > 5 && idade < 10)
    printf("Voçe é uma criança!\n");
    
  else if (idade > 10 && idade < 18)
    printf("Voçe é um adolecente!\n");
    
  else
    printf("Comando final!\n");
  }
    
return 0;
  
}