#include <stdio.h>

int i,j,uwu,owo;
void fnDibujaCuadro(){
	printf("*");}
void fnDibujaEspacio(){
    printf("\n");}
void fnPrimerValor(){
    printf("Ingresa el largo del dibujo:\n");}
void fnSegundoValor(){ 
    printf("Ingresa el ancho del dibujo:\n");}
void fnEscaneado1(){
    scanf("%d",&uwu);}
void fnEscaneado2(){  
    scanf("%d",&owo);}

int main(){
    fnPrimerValor();
	fnEscaneado1();
    fnSegundoValor();
    fnEscaneado2();

    for(i=0; i<uwu ; i++){
        for(j=0; j<owo; j++)
            fnDibujaCuadro ();
            fnDibujaEspacio ();
    }
return 0;}

