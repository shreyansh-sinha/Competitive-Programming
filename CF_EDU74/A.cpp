#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int q;
	cin >> q;
	while(q--) {
		int a, b;
		cin >> a >> b;
		a = max(a, b);
		b = min(a, b);
		if(a-b >= 2)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
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
