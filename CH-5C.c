#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float a , m , j , h , mu , s ;

 printf("veuiller entrer le nombre du annees : ");
 scanf("%f", &a);
 m = a * 12 ;
 j = a * 365 ;
 h = j * 24 ;
 mu = h * 60 ;
 s = m * 60 ;

  printf("donc %f ans = %f m , %f j , %f h , %f mu , %f s ;", a , m , j , h , mu , s);
    return 0;

}
