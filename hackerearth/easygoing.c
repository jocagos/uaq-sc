#include <stdio.h>
#include <stdlib.h>

int compareInt (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int _sum(int *arr, int n){
  int i, sum = 0;
  for( i = 0; i < n; ++i )
    sum += arr[i];
  return sum;
}

int main(){
  int t, n, arr[1000], m, i;
  scanf("%d", &t);
  while(t--){
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; ++i)
      scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), compareInt);
    printf("%d\n", _sum(arr+m, n-m) - _sum(arr, n-m)); 
  }
  return 0;
}
