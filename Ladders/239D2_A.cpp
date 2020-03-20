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
	vector <int> v(n);
	int ans = INT_MAX;
	for(int i=0;i<n;i++)
		cin >> v[i];
	for(int i=0;i<n;i++) {
		int cost = 0;
		for(int j=0;j<v[i];j++) {
			int x;
			cin >> x;
			cost += x*5;
		}
		cost += v[i]*15;
		//cout << cost << endl;
		ans = min(ans, cost);
	}
	cout << ans;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
