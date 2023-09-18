#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float n ;
printf("veuiller enter le note du l'eleve : ");
scanf("%f", &n);

if (n<10){
    printf("voila la mention du l'eleve c'est recalé ");
}
else if (10 <= n && n < 12){
     printf("voila la mention du l'eleve c'est passable ");
}
else if ( 12<= n && n < 14){
     printf("voila la mention du l'eleve c'est assez bien  ");
}

else if ( 14 <= n && n < 16){
    printf("voila la mention du l'eleve c'est bien ");
}
else if ( n >= 16){
    printf("voila la mention du l'eleve c'est tres bien ");
}

    return 0;

}
