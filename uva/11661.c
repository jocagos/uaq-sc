// UVa 11661 - Burger Time?
#include <stdio.h>

int main( void ){
    int l = -1, i, idx, min;
    char f, c;
    while( l ){
        scanf("%d ", &l);
        idx = f = c = 0;
        min = l+1;
        for( i = 0; i < l; ++i ){
            scanf("%c", &c);
            if( c == '.' || min == 0 ) continue;
            if( c == 'z' || c == 'Z' ){
                min = 0;
                scanf("%*s");
                break;
            }
            else if( ( c == 'R' || c == 'D' ) && !f ){
                f = c;
                idx = i;
            }
            else if( (c == 'R' || c == 'D' ) && c == f ) idx = i;
            else if( ( c == 'R' || c == 'D' ) && f != c ){
                min = ( i - idx < min ? i - idx : min );
                f = c;
                idx = i;
            }
        }
        if( l ) printf("%d\n", min);
    }
    return 0;
}