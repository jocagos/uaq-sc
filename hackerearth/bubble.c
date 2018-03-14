#include <stdio.h>
#include <stdlib.h>
int bubble_sort( int * A, int n ) {
  int temp, swaps = 0, k, i;
    for( k = 0; k< n-1; k++) {
        for( i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                swaps++;
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
    return swaps;
}

int main(){
    int num, i;
    scanf("%d", &num); 
    int * arr = (int*) malloc(num * sizeof(int));
    for( i = 0; i < num; ++i ) scanf("%d", &arr[i]);
    printf("%d\n", bubble_sort(arr, num));
    return 0;
}
