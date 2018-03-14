#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, j;
    scanf("%d", &n);
    int * arr = (int *) malloc( n * sizeof(int) );
    for( i = 0; i < n; ++i ) scanf("%d", &arr[i]);
    long long inv = 0;
    for( i = 0; i < n-1; ++i )
      for( j = i+1; j < n; ++j ) if( arr[i] > arr[j] ) ++inv;
    if( inv & 1 ) printf("NO\n");
    else printf("YES\n");
  }
  return 0;
}
