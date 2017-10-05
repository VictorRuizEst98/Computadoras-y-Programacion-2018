#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

int precio=0;
int iva=0;
int resultado=0;

printf("Calculadora de IVA");
printf("\n\nInserta la cantidad que deseas calcular");
scanf("%d",&precio);
printf("\nEl IVA es de: %d x .16= %d",precio,precio*16/100);
iva= precio*16/100;
printf("\n\nEl Precio con IVA incluido es de: %d",iva+precio);}


