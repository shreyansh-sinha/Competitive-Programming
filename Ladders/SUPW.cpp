#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector <int> a(n);
	for(int i=0;i<n;i++)
		cin >> a[i];
	vector <int> dp(n);
	dp[n-1] = a[n-1];
	dp[n-2] = a[n-2];
	dp[n-3] = a[n-3];
	for(int i=n-4;i>=0;i--)
		dp[i] = a[i] + min(dp[i+1], min(dp[i+2], dp[i+3]));
	// for(int i=0;i<n;i++)
	// 	cout << dp[i] << " ";
	// cout << endl;
	cout << min(dp[0], min(dp[1], dp[2]));
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
