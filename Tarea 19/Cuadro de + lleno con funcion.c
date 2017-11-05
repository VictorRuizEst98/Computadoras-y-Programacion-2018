#include <stdio.h>

void fnDibujaCuadro(){
	printf("*");}
void fnDibujaEspacio(){
    printf("\n");}

int main()
{
    int i,j,uwu;

    printf("Ingrese un numero: ");
    scanf("%d",&uwu);

    for(i=0; i<uwu ; i++){
        for(j=0; j<uwu; j++)
            fnDibujaCuadro ();
            fnDibujaEspacio ();
    }
}

