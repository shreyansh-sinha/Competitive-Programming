#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector <int> v(n);
	vector <int> sum(n);
	for(int i=0;i<n;i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	sum[n-1] = v[n-1];
	for(int i=n-2;i>=0;i--) {
		sum[i] = sum[i+1] + v[i];
	}
//	for(int i=0;i<n;i++)
//		cout << sum[i] << " ";
//	cout << endl;
	int q;
	cin >> q;
	while(q--) {
		int m;
		cin >> m;
		cout << sum[n-m+1] + sum[0] - sum[n-m] << '\n';
	}
	return ;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}
