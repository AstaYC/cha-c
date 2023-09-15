#include <stdio.h>
#include <stdlib.h>

int main()
{

float a , b ;
printf("veuiller entrer la valeur de a et de b : ");
scanf("%f%f" ,&a, &b);

printf("donc voila \n");
printf("a + b = %.1f\n", a+b);
printf("a - b = %.1f\n", a-b);
printf("a * b = %.1f\n", a*b);
printf("a / b = %.1f", a/b);


return 0;
}
