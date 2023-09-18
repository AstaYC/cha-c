#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
char t[100];
int r , i ;
printf("veuillez entrez votre nom ;");
scanf(" %s" ,t);

for (i=0 ; i<=100 ; i++){
    if ( t[i] == '\0'){
        break;
   }
   r++;
}
printf("voila il ya %d de caractere dans votre nom ! ", r);

    return 0;

}
