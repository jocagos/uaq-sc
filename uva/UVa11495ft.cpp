#include <bits/stdc++.h>
using namespace std;
int read( vector<int> * bit, int idx )
{
  int sum = 0;
  while( idx > 0 ){
    sum += bit->at(idx);
    idx -= (idx & -idx);
  }
  return sum;
}
void update( vector<int> * bit, int idx, int val )
{
  while( idx < bit->size() ){
    bit->at(idx) += val;
    idx += (idx & -idx);
  }
}

int main(){
  long long int n, total = 0, size = 0;
  scanf("%lld", &n);
  while(n){
    vector<long long> arr;
    if( n == 0 ) break;
    total = 0;
    size = 0;
    for( long long i = 0, num; i < n; ++i ){
      scanf("%lld", &num);
      size = max(size, num);
      arr.push_back(num);
    }
    vector<int> tree(size+1, 0);
    for( int i = arr.size()-1; size > 0 && i >= 0; --i ){
      total += read( &tree, arr[i]-1);
      update(&tree, arr[i], 1);
    }
    printf("%s\n", (total % 2 == 0) ? "Carlos" : "Marcelo" );
    scanf("%lld", &n);
  }
  return 0;
}
