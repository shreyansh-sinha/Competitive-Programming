#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
bool is_two_same(int a, int b, int c) {
	if(a == b)
		return true;
	if(b == c)
		return true;
	if(a == c)
		return true;
	return false;
}
int mx(int a, int b) {
	if(a > b)
		return a;
	return b;
}
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int sum = abs(a-b) + abs(b-c) + abs(a-c);
		//cout << sum;
		if(a != b && b != c && c != a)
			cout << sum - 4 << '\n';
		else if(is_two_same(a, b, c))
			cout << mx(0, sum-4) << '\n';
		else
			cout << '0' << '\n';
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
