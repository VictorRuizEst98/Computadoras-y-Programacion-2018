#include <stdio.h>
#include <string.h>
#include <info.h>

struct alumnos{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[10];
    };
    //Aqui se le agregó al "struct" el "typedef",se remplazó "var1" por "ALUMNO" y se ha movido antes de declarar la variable int main//
typedef struct alumnos ALUMNO;

int main(int argc, char** argv) {
  appInfoData();
  
  ALUMNO var1; //Esto se ha agregado para el segundo ejemplo//
  
  printf("Introduce la edad:");
  scanf("%d",&var1.edad);
  
  printf("Introduce el nombre:");
  fflush(stdin);
  gets(var1.nombre);
  printf("Edad: %d Nombre: %s",var1.edad, var1.nombre);
  
  
  
  
  
 }
