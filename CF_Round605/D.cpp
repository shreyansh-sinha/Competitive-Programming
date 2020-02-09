				// *** partially solved *** //
#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector <int> v;
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	int l[n];
	int r[n];
	for(int i=0;i<n;i++) {
		l[i] = 1;
		r[i] = 1;
	}
	int ans = 0;
	for(int i=1;i<n;i++) {
		if(v[i] > v[i-1])
			l[i] = l[i-1]+1;
		else
			l[i] = 1;
		ans = max(ans, l[i]);
	}
	for(int i=n-2;i>=0;i--) {
		if(v[i+1] > v[i])
			r[i] = r[i+1]+1;
		ans = max(ans, r[i]);
	}
	for(int i=0;i<n-2;i++) {
		if(v[i] < v[i+2])
			ans = max(ans, l[i]+r[i+2]);
	}
	cout << ans << '\n';
	return ;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}

