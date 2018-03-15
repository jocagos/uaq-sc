#include <stdio.h>
#include <stdlib.h>
int main(){
  int n = -1, *arr, i, j, inv;
  scanf("%d", &n);
  while(n){
    inv = 0;
    arr = (int *) malloc( n * sizeof(int));
    for( i = 0; i < n; ++i ) scanf("%d", &arr[i]);
    for( i = 0; i < n; ++i )
      for( j = i+1; j < n; ++j )
	if( arr[i] > arr[j] ) inv++;
    if( inv % 2 ) printf("Marcelo\n");
    else printf("Carlos\n");
    scanf("%d", &n);
    free(arr);
  }
  return 0;
}
