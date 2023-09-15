#include <stdio.h>
#include <stdlib.h>

int main()
{

float xa , xb , ya , yb , ab ;
 printf ("veuillez enter les coordonnes de point a : ");
 scanf("%f%f", &xa , &ya);
 printf("veuillez entrer les coordonnes de point b : ");
 scanf("%f%f",&xb , &yb);

ab = sqrtf  (pow ((xb - xa) , 2 ) + pow ((yb - ya), 2));
printf ("voila ab = %f ",ab);


return 0;
}
