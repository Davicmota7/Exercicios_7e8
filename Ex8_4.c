#include <stdio.h>

int main() {
  int n,      
      soma,    
      divisor; 

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  
  soma = 0;
  
  for (divisor = 1; divisor < n; divisor++){
    if (n % divisor == 0)
      soma = soma + divisor;
  }
  
  if (n == soma)
    printf("O numero %d e' perfeito\n", n);
  else 
    printf("O numero %d nao e' perfeito\n", n);
  
  return 0;
}