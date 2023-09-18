#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 char c ;
  printf("veuiller enter le caractere : ");
  scanf(" %c",&c);

  switch (c){
  case 'a':
  case 'e':
  case 'o':
  case 'u':
  case 'i':
            printf("le caractere c'est un voyelle !");

            break ;
  default : printf(" le caractere c'est un consone");
            break ;
  }

    return 0;

}
