#include <stdio.h>
#include <stdlib.h>

int cmp( const void *, const void *);

int v[1000];

int main(){
    int n, i, j, side = 1;
    scanf("%d", &n);
    for( i = 0; i < n; ++i ) scanf("%d", &v[i]);
    qsort(v, n, sizeof(int), cmp);
    i = 0, j = n-1;
    while(n--){
        if( side ) printf("%d", v[i++]);
        else printf("%d", v[j--]);
        side = !side;
        printf("%s", (n ? " " : "\n"));
    }
    return 0;
}

int cmp( const void * left, const void * right)
{
    return *(int*)left - *(int*)right;
}