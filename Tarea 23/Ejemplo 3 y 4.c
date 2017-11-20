#include <stdio.h>
#include <string.h>
#include <info.h>

struct alumnos{
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char nCuenta[15];
    };

typedef struct alumnos ALUMNO;

ALUMNO nuevoAlumno(){
  ALUMNO tmp; 
  printf("Introduce la edad:");
  scanf("%d",&tmp.edad);
  
  printf("Introduce el nombre:");
  fflush(stdin);
  gets(tmp.nombre);
  
  printf("Introduce el genero:");
  scanf("%c",&tmp.genero);
  
  printf("Introduce carrera:");
  fflush(stdin);
  gets(tmp.carrera);
  
  printf("Introduce numero de cuenta:");
  fflush(stdin);
  gets(tmp.nCuenta);
  
  return tmp;
  }
  
  void imprimeAlumno(ALUMNO al){
 printf("******************************\n");
 printf("Nombre: %s\n",al.nombre);
 printf("Edad: %d\n",al.edad);
 printf("Genero: %c\n",al.genero);
 printf("Carrera: %s\n",al.carrera);
 printf("Numero de cuenta: %s\n",al.nCuenta);}

int main(int argc, char** argv) {
	
	
	
	appInfoData();
	
	ALUMNO var1;
	
	var1=nuevoAlumno();
   
    //Aqui se remplaza "printf("Edad: %d nombre: %s", var1.edad, var2.nombre) por lo siguiente:
    imprimeAlumno(var1);
    
    return 0;
	
}
