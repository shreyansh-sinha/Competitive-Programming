				// *** partially solved *** //
#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int> v;
		int indices[n];
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			v.push_back(x);
			indices[x-1] = i;
		}
		int ans[n];
		int mn = INT_MAX, mx = 0;
		for(int i=0;i<n;i++) {
			mn = min(mn, indices[i]);
			mx = max(mx, indices[i]);
			if(mx-mn == i)
				ans[i] = 1;
			else
				ans[i] = 0;
		}		
		for(int i=0;i<n;i++)
			cout << ans[i];
		cout << endl;
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

