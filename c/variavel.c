#include <stdio.h>
#include <stdlib.h>

int main(){ 

  float preco = 8.50;
  int quantidade = 1;
  char produto [10] = "Oléo";

  printf("%d %s custa R$%1.2f\n", quantidade, produto, preco);
  return 0; 
}