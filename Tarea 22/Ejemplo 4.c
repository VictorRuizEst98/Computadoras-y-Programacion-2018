#include <stdio.h>
#include <info.h>
#define MAX 10



int main(){
appInfoData();
  int cals[MAX] = {8,9,8,8,6,7,9,8,10,10};
  int *ptrCals;
  
   printf("Valor del primer elemento: %d\n", cals[0]);
   printf("Direccion del primer elemento: %d\n", &cals[0]);
   printf("Direccion del primer elemento: %d\n", cals);
   
   ptrCals=cals;
   
   printf("Valor del primer elemento: %d\n", *ptrCals);
   ptrCals++;
   printf("Valor del segundo elemento: %d\n", *ptrCals);
   ptrCals++;
   printf("Valor del tercer elemento: %d\n", *ptrCals);

}
