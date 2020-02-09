#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool two_same(int a, int b, int c) {
	if(a == b)
		return true;
	if(b == c)
		return true;
	if(a == c)
		return true;
	return false;
}
void solve() {
	int t;
	cin >> t;
	int c = 0;
	while(t--) {
		int a[3];
		int c = 0;
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a+3);
		if(a[2] > a[0]+a[1])
			cout << a[0]+a[1] << endl;
		else
			cout << (a[0]+a[1]+a[2])/2 << endl;
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