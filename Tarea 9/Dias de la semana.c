
#include <stdio.h>

int main(int argc, char** argv) {
int UwU=0;
printf("Dias de la semana");
printf("\n\nDame un numero entre 1 y 7\n");
scanf("%d",&UwU);
if(UwU>=1&&UwU<=7){
	switch(UwU){
		case 1:
			printf("Lunes");
			break;
		case 2:
			printf("Martes");
			break;
		case 3:
			printf("Miercoles");
			break;
		case 4:
			printf("Jueves");
		    break;
		case 5:
			printf("Viernes");
			break;
		case 6:
			printf("Sabado");
			break;
		case 7:
			printf("Domingo");
			break;
	}
}else{
 printf("\n\nQue no sabes leer >:(?");}}

