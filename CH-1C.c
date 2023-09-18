#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int  n ;
 printf("veuiller enter la valeur du nombre n : ");
 scanf("%d", &n);

 if (n%2 == 0){
    printf("le nombre %d est pair !", n);
 }
 else {
    printf("le nombre %d est impaire !",n);
 }

    return 0;

}
