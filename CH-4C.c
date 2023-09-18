#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float a , b , c , d , x1 , x2 ;
 printf("veuilller entrer les valeur du a , b , c : ");
 scanf ("%f%f%f",&a , &b , &c );

d = pow (b , 2) - 4*a*c ;

if ( d==0){
    x1 = -b / 2*a ;
    printf("il ya un seule solution x = %f ", x1);
}
else if ( d > 0){
    x1 =  (-b - sqrt(d) ) / (2*a) ;
    x2 =  (-b + sqrt(d) ) / (2*a) ;
    printf("il ya deux solution x1 = %f et x2 = %f ", x1 , x2);
}
else {
    printf("il n'est pas un solution");
}


    return 0;

}
