#include <stdio.h>
#include <stdlib.h>
int main(){
  int n, *arr, min, i, x, j, m_idx;
  scanf("%d %d", &n, &x);
  arr = (int*) malloc(n*sizeof(int));
  for( i = 0; i < n; ++i ) scanf("%d", &arr[i]);
  for( i = 0; i < x; ++i ){
    min = arr[i], m_idx = i;
    for( j = i+1; j < n; ++j ){
      if( arr[j] < min ) min = arr[j], m_idx = j;
    }
    int t = arr[i];
    arr[i] = min;
    arr[m_idx] = t;
  }
  for( i = 0; i < n; ++i ) printf("%d%s", arr[i], (i+1 == n ? "\n" : " " ));
  free(arr);
  return 0;
}
