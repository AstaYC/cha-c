#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
char ca ;
int asc ;
printf("veuiller entrer le caractere : ");
scanf(" %c", &ca);

asc = (int)ca ;
if ((65 <= asc && asc <=90) || ( 97 <= asc && asc <= 122)){
       if (65 <= asc && asc <=90){
        printf("voila le caractere c'est un alphabet et MAJUSCULE");
       }
       else {
        printf("voila le caractere c'est un alphabet et MINISCULE");
       }
}
else {
    printf("ohh pardon le caractere n'est pas un alphabet");
}

    return 0;

}
