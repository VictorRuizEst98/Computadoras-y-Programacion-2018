#include <stdio.h>
#include <info.h>



int main(int argc, char** argv) {
int dato;

appInfoData();
 FILE *ptrArchivo;
 ptrArchivo=fopen("datos.dat","wb");
 if(ptrArchivo=NULL){
  printf("Error al abrir el archivo \n");
  }else{
  
   printf("Dame el dato a guardar en el archivo:\n");
   scanf("%d",&dato);
   
   fprintf(ptrArchivo,"%d \n", dato);
   fprintf(ptrArchivo,"%d \n", ++dato);
   fprintf(ptrArchivo,"%d \n", ++dato);
   
   fclose(ptrArchivo);}
   return 0;
	
}
