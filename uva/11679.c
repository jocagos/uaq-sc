<<<<<<< HEAD
// UVa 11679 - Sub Prime
=======
>>>>>>> 6bea9c512b7c67247ba6368856c797001fc0cb68
#include <stdio.h>

int res[20];

int main(){
    int i, yn, d, c, b = -1, n, v;
    while( b != 0){
        scanf("%d %d", &b, &n);
        yn = 1;
        if( !b ) break;
        for( i = 0; i < b; ++i ) scanf("%d", &res[i]);
        for( i = 0; i < n; ++i ){
            scanf("%d %d %d", &d, &c, &v);
            res[d-1] -= v;
            res[c-1] += v;
        }
        for( i = 0; i < b; ++i ){
            if( res[i] < 0 ){ yn = 0; break;}
        }
        if( yn ) printf("S\n");
        else printf("N\n");
    }
    return 0;
}