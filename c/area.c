#include <stdio.h>

int main(){
    int base, altura;
    float area;

    base = 15;
    altura = 10;
    
    area = base + altura / 2;

    printf("\nA base do triangulo com a= %d e \nbase= %d \no resultado é %2.2f\n", altura, base, area);

    printf("\n\n\n");

    return 0;
}