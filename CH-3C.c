#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int a , b , s , s3;
    printf (" veuiller entrer la valeur du a , b :");
    scanf("%d%d", &a, &b);
  if ( a==b ){
    s = a + b ;
    s3 = s * 3 ;
    printf (" voila le triple du la somme entre %d et %d c'est = %d", a , b , s3);
  }
    else {
        s = a + b ;
    printf( " voila la somme entre %d et %d = %d", a , b ,s );
    }
    return 0;

}
