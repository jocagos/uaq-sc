// A STL Set based approach for inversion count 
#include<bits/stdc++.h>
#define io_opt() ios_base::sync_with_stdio(0); cin.tie(0)
using namespace std;
set<int> set1;
// Returns inversion count in arr[0..n-1]
long long getInvCount(int * arr,int n)
{
    // Create an empty set and insert first element in it
    set1.insert(arr[0]);
 
    long long invcount = 0; // Initialize result
 
    set<int>::iterator itset1; // Iterator for the set
 
    // Traverse all elements starting from second
    for (int i=1; i<n; i++)
    {
        // Insert arr[i] in set (Note that set maintains
        // sorted order)
        set1.insert(arr[i]);
 
        // Set the iterator to first greater element than arr[i]
        // in set (Note that set stores arr[0],.., arr[i-1]
        itset1 = set1.upper_bound(arr[i]);
 
        // Get distance of first greater element from end
        // and this distance is count of greater elements
        // on left side of arr[i]
        invcount += distance(itset1, set1.end());
    }
    return invcount;
}
 
// Driver program to test above
int main()
{
  io_opt();
    int * arr;
    int n = -1;
    cin >> n;
    while(n){
      arr = new int[n];
      for( int i = 0; i < n; ++i ) cin >> arr[i];
      cout << (getInvCount( arr, n ) % 2 ? "Marcelo" : "Carlos" ) << endl;
      set1.clear();
      delete [] arr;
      cin >> n;
    }
    return 0;
}
