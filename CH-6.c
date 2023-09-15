#include <stdio.h>
#include <stdlib.h>

int main()
{

float r , c ;
const float pi = 3.14 ;

printf("veuillez enter la valeur du rayon du cercle : ");
scanf("%f", &r);

c = 2 * pi * r ;
printf("voila la circonférence du cercle c'est c = %f ", c);

return 0;
}
