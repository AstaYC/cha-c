#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t[10] , i , s , a ;

  for ( i = 0 ; i <= 9 ; i++){
  printf("veuiller entrer le %d eme nombre : ", i+1);
  scanf ("%d" , &t[i]);
}
    s = 0 ;
  for (i = 0 ; i <= 9 ; i++){
       if (t[i] > s ){
         s = t[i] ;
       }
}
  a = 9999999999999999999999999999 ;
  for (i = 0 ; i <= 9 ; i++){
       if (t[i] < a ){
         a = t[i] ;
       }
}
printf("le grand nombre c'est %d \n" , s);
printf("le petit nombre c'est %d " , a);


    return 0;

}
