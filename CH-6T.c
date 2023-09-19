#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   char t[] ="Quel sinistre mot !";
   int i , e , f , s;
     e = 0 ;
    for (i=0 ; i<19 ; i++){
        e++;
        if ( t[i] == 'm'){
            break;
        }
    }
    printf("le caractere 'm' c'est le %d eme dans la chaine \n", e);
    f = 0 ;
    for (i=0 ; i<19 ; i++){
          f++;
        if ( t[i] == 's'){
            break;
        }
    }
    printf("le caractere 's' c'est le %d eme dans la chaine \n", f);

    s = t[e-1];
    t[e-1] = t[f-1];
    t[f-1] = s ;
    char c ;
    printf("voila la forme correcte du la phrase c'est (%s) \n", t);
    printf("----------------------------------------------\n");
    printf("veuiller entrer un lettre aleratoirement : ");
    scanf(" %c",&c);

    int n ;

    for (i=1 ; i<19 ; i++){
        if ( c == t[i]){
             n = i ;
             break;
        }
    }
    if ( n != i){
        printf("oops , le caractere n'exist pas !");
    }
    else {
        printf("le caractere est existe dans %d eme place !",n+1);
    }
    return 0;
}



