#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float t[5] , s , x ;
    int i, j , c , c2;

    for ( i = 0 ; i <= 4 ; i ++){

        printf("veuiller entrer la note du etudiant %d: \n", i+1);
        scanf ("%f" , &t[i]);
        }
    for ( i = 0 ; i <= 4 ; i ++){
        printf("la note du etudiant %d c'est : %f \n" , i+1 ,t[i] );
    }
    s = 0 ;

    for ( i = 0 ; i <= 4 ; i ++){
         s = s + t[i];
    }
 printf("voila la moyenne du classe c'est : %f \n", s / 5 );
    c = 0 ;
    for ( i = 0 ; i <= 4 ; i ++){
        if ( t[i] > (s/5)){
            printf("la note du l'etudiant %d est superieur que la moyenne  \n", i+1);
            c++;
            }
         else if ( t[i] < (s/5)){

            printf("la note du l'etudiant %d est inferieur que la moyenne  \n ", i+1);
         }
         else {
            printf("la note du l'etudiant %d est egale la moyenne \n", i+1);
         }
    }
    printf("il ya %d etudiant qui sont depasse la moyenne !! bravo ! \n", c);

    x = 21 ;
    for ( i = 0 ; i <= 4 ; i ++){

        if ( t[i] < x ){
            x = t[i];
        }
    }
    float y = 0 ;
 for ( i = 0 ; i <= 4 ; i ++){

        if ( t[i] > y ){
            y = t[i];
        }
    }
printf("voila l'element le plus grand c'est %f et le plus petit c'est %f" ,y,x);


    return 0;

}
