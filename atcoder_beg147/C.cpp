#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int sumXOR(int arr[], int n) {
    int sum = 0; 
    for (int i = 0; i < 32; i++)  
    { 
        //  Count of zeros and ones 
        int zc = 0, oc = 0;  
          
        // Individual sum at each bit position 
        int idsum = 0;  
        for (int j = 0; j < n; j++) 
        { 
            if (arr[j] % 2 == 0) 
                zc++; 
            else
                oc++; 
            arr[j] /= 2; 
        } 
          
        // calculating individual bit sum  
        idsum = oc * zc * (1 << i);  
  
        // final sum     
        sum += idsum;
    } 
    return sum;     
}
void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << sumXOR(a, n)<< '\n';
}
int32_t main() {
    FO;
    solve();
    return 0;
}