#include <stdio.h>
#include <stdlib.h>

int main()
{

float a , b , c , d , s , m ;

printf("veuillez enter les 4 nombres : ");
scanf("%f%f%f%f", &a , &b , &c , &d);
s = a + b + c + d ;
m = s / 4 ;

printf(" la somme du 4 nombres c'est = %f\n", s);
printf(" le moyenne  du 4 nombres c'est = %f", m);


return 0;
}
