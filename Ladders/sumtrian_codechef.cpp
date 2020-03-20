#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n][n] = {0};
		for(int i=0;i<n;i++) {
			for(int j=0;j<=i;j++) {
				cin >> a[i][j];
			}
		}
		// for(int i=0;i<n;i++) {
		// 	for(int j=0;j<=i;j++) {
		// 		cout << a[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		int dp[n][n] = {0};
		for(int j=0;j<n;j++)
			dp[n-1][j] = a[n-1][j];

		for(int i=n-2;i>=0;i--) {
			for(int j=0;j<=i;j++) {
				dp[i][j] = a[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
			}
		}
		// for(int i=0;i<n;i++) {
		// 	for(int j=0;j<=i;j++) {
		// 		cout << dp[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		cout << dp[0][0] << endl;
	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
