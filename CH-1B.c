#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int i,j,s ;
  printf("x * y \t");

   for (j = 1 ; j <= 10 ; j++){
       printf(" %d\t", j);
 }
     printf("\n");

   for (j = 0 ; j <= 41 ; j++){
    printf("- ");
   }
  for (i = 1 ; i<= 10 ; i++ ){
    printf("\n");
    printf(" %d\t ",i);

   for (j = 1 ; j<= 10 ; j++){
    s = i * j ;
    printf( "%d\t" ,s);
   }
}

    return 0;

}
