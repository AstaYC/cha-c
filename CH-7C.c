#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
char al ;
 int asc ;

 printf("veuiller enter l'alphabet : ");
 scanf(" %c", &al);

 asc = (int)al;
 if (asc >= 65 && asc <= 90){
    printf("voila l'alphabet c'est majiscule.");
 }
else {
    printf("l'alphabet n'est pas majuscule.");
    return 0;

}
