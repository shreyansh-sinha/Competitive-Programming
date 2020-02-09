#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
 	int t;
 	cin >> t;
 	while(t--) {

 		int n, k;
 		cin >> n >> k;
 			if(n%k == 0)
 				cout << n << endl;
 			else {
 			int p = n/k;
 			int t1 = n-k*p;
 			int t2 = k/2;
 			int alpha = min(t1, t2);
 			cout << (k-alpha)*p + (alpha)*(p+1) << endl;
 		}
 	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
