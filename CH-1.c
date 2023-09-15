#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 char n[50] , p[50] ,  s , nu[50] ;
 int a  ;

printf("veuillez entrer votre nom ");
scanf (" %s", n);
printf("veuillez entrer votre prenom ");
scanf (" %s", p);
printf("veuillez entrer votre age ");
scanf (" %d", &a);
printf("veuillez entrer votre sexe ");
scanf (" %c", &s);
printf("veuillez entrer votre numero ");
scanf (" %s", &nu);

printf("voila votre information : \n");
printf("votre nom c'est : %s \n",n );
printf("votre prenom c'est : %s \n",p );
printf("votre age c'est : %d \n",a );
printf("votre sex c'est : %c \n",s );
printf("votre numero de telephone c'est : %s \n",nu );



    return 0;
    }
