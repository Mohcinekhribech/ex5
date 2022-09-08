
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int compte(int age){

      int cp=0;

      for(int i=1;i<=age;i++){
        cp+=500+i*3;
      }
      return cp;
}
int main()
{

     int age;
     start:
      printf("entrer l'age de Amal :");
      scanf("%d",&age);
      printf("%d \n",compte(age));
 goto start;

      return 0;
}
