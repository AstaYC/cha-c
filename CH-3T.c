#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int t[5], i, s, j  ;

    for ( i = 0 ; i < 5 ; i ++)
    {
        printf("veuiller entrer la valeur du nombre %d ", i+1);
        scanf("%d", &t[i]);
    }
    for ( j = 0 ; j < 4 ; j++)
    {

        for ( i = 0 ; i < 4 ; i++)
        {
            if ( t[i] <= t[i+1] )
            {
                s = t[i] ;
                t[i] = t[i+1] ;
                t[i+1] = s ;
            }
        }
    }
    printf(" voila le tablaux en ordre de plus grand a le plus petit\n ");

    for ( i = 0 ; i <= 4 ; i++)
    {
        if ( i == 4)
        {
            printf("%d", t[i]);
            break;
        }
        printf("%d > ", t[i]);
    }
    return 0;
}


