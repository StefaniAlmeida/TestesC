#include <stdio.h>
int main()
{
  int cont = 1;
  int idade;

  while (cont <= 5) {
    printf("Qual a sua idade?");
    scanf("%i", &idade);
   cont = cont +1;
  
    if (idade >= 18) { 
    printf("Voçe já é maior de idade querido!\n");
    printf("\n");
    }
    else 
    printf("Voçe é menor de idade querido!\n");
    printf("\n");
    
  cont = cont +1;
  
  }
    
    
  
  return 0;
}