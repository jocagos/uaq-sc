/* UVa 11661 - Burger Time? */
#include <stdio.h>

int main( void ){
    int l = -1, i, d, min;
    char f, c;
    scanf("%d ", &l);
    while( l ){
        d = 0;
        f = '.';
        min = l;
        for( i = 0; i < l; ++i ){
            scanf("%c", &c);
            if( c == 'z' || c == 'Z' ){
                min = 0;
                scanf("%*s");
                break;
            }
            if( c == 'R' ){
                if( f == 'D' )
                    if( d < min )
                        min = d;
                    d = 1;
                    f = 'R';
                    continue;
            }
            if( c == 'D' ){
                if( f == 'R' )
                    if( d < min ) min = d;
                d = 1;
                f = 'D';
                continue;
            }
            d++;
        }
        if( l ) printf("%d\n", min);
        scanf("%d ", &l);
    }
    return 0;
}