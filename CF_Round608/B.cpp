#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int mx(int a, int b) {
	if(a > b)
		return a;
	return b;
}
int mn(int a, int b) {
	if(a > b)
		return b;
	return a;
}
using namespace std;
void solve() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if(e > f) {
		int z = min(a, d);
		d -= z;
		int z1 = min(d, mn(b, c));
		cout << z*e + z1*f;
	}	
	else {
		int z = min(d, mn(b, c));
		d = d-z;
		cout << z*f + min(a, d)*e;
	}
	return;
}
int32_t main()
{
	fastio();
	solve();
	return 0;
}