#include <stdio.h>
#include <stdlib.h>

struct pair{
  int x, y;
};

int * insertion( int *, int );

typedef struct pair ii;

int main(){
  int n, *arr, i, j;
  scanf("%d", &n);
  arr = (int *) malloc(n * sizeof(int));
  for( i = 0; i < n; ++i ) scanf("%d", &arr[i]);
  int * carr = insertion(arr, n);
  for( i = 0; i < n; ++i ){
    for( j = 0; j < n; ++j){
      if( arr[i] == carr[j] ){
	printf("%d%s", j+1, (i+1==n ? "\n" : " " ));
	break;
      }
    }
  }
  return 0;
}

int * insertion( int * arr, int n )
{
  int * copy = (int *) malloc(n * sizeof(int));
  int i, tmp, j;
  for( i = 0; i < n; ++i) copy[i] = arr[i];
  i = 1;
  while( i < n ){
    j = i;
    while( j > 0 && copy[j-1] > copy[j] ){
      tmp = copy[j];
      copy[j] = copy[j-1];
      copy[j-1] = tmp;
      j--;
    }
    i++;
  }
  return copy;
}
