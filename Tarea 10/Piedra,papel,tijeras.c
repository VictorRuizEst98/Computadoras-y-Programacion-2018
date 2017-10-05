#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){

int owo=0;
int uwu=0;
	printf("Juguemos!");
	printf("\nInstrucciones:\n\n 1 = Papel \n 2 = Piedra \n 3 = Tijeras");
	printf("\n\n Turno del jugador 1:");
	scanf("%d", &uwu);
	 if(uwu>=1&&uwu<=3){
          printf(" Turno del jugador 2:");
		   scanf("%d",&owo);}
     else
     	printf("Oye compa, respeta las reglas >:(");
     if (owo!=1&&owo!=3&&owo!=2){
          printf("Oye compa, respeta las reglas >:(");}
      else if (owo==uwu){
	    printf("\n Ambos eligieron lo mismo\n\n Es un empate!!");}
	  else if (uwu==1&&owo==2){ 
	    printf("\n El papel le gana a la piedra!\n\n Gana el jugador 1!");}
	  else if(uwu==2&&owo==1){
		printf("\n El papel le gana a la piedra!\n\n Gana el jugador 2!");}
	  else if(uwu==1&&owo==3){
		printf("\n Las tijeras le ganan al papel!\n\n Gana el jugador 2!");}
	  else if(uwu==3&&owo==1){
	    printf("\n Las tijeras le ganan al papel!\n\n Gana el jugador 1!");}
	  else if(uwu==2&&owo==3){
	    printf("\n La piedra le gana a las tijeras!\n\n Gana el jugador 1!");}
	  else if(uwu==3&&owo==2){
	    printf("\n La piedra le gana a las tijeras!\n\n Gana el jugador 2!");}
	printf("\n\n Gracias por jugar, regresa cuando quieras!\n Fin del juego!");
	}
	    
	  
	 
	
 




	
	

