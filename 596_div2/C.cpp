#include <bits/stdc++.h>
using namespace std;
int countDistinct(int arr[], int k, int n)
{
    // Creates an empty hashmap hm
    map<int, int> hm;
	int mn = n;
    // initialize distinct element count for current window
    int dist_count = 0;

    // Traverse the first window and store count
    // of every element in hash map
    for (int i = 0; i < k; i++)
    {
       if (hm[arr[i]] == 0)
       {
           dist_count++;
       }
    hm[arr[i]] += 1;
    }

    if(dist_count < mn)
	    mn = dist_count;
   // Traverse through the remaining array
   for (int i = k; i < n; i++)
   {
     // Remove first element of previous window
     // If there was only one occurrence, then reduce distinct count.
     if (hm[arr[i-k]] == 1)
     {
        dist_count--;
     }
   // reduce count of the removed element
     hm[arr[i-k]] -= 1;

   // Add new element of current window
   // If this element appears first time,
   // increment distinct element count

    if (hm[arr[i]] == 0)
    {
       dist_count++;
    }
    hm[arr[i]] += 1;

  // Print count of current window
  	mn = min(mn, dist_count);
  }
   //cout << mn << endl;
   return mn;
}
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin >> t;
        while(t--) {
                int n, k, d;
                cin >> n >> k >> d;
                int a[n];
                for(int i=0;i<n;i++)
                        cin >> a[i];
               	cout << countDistinct(a, d, n) << '\n';
        }
        return 0;
}
