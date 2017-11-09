#include <stdio.h>
#include <iva.h>


int main(int argc, char** argv) {

float precio;
float iva=.16;
float resultado;
float suma;

printf("Calculadora de IVA");
printf("\n\nInserta la cantidad que deseas calcular");
scanf("%f",&precio);
printf("\nEl IVA es de: %.2f x %.2f = %.2f",precio,iva,fnMult(precio,iva));
suma=fnMult(precio,iva);
printf("\n\nEl Precio con IVA incluido es de: %.2f",fnSuma(precio,suma));}


