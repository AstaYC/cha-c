#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float n ;
 printf("veuiller entrer le nombre : ");
 scanf ("%f",&n);

 if (n<0){
    printf("voila le nombre c'est negative ");
 }
else if (n==0){
    printf("voila le nombre est null");
}
else {
    printf("voila le nombre est possitive");
}
    return 0;

}
