#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool check(int n) {
	while(n > 0) {
		int rem = n%3;
		if(rem == 2)
			return false;
		n /= 3;
	}
	return true;
}
void solve() {
	vector <int> v;
	for(int i=1;i<=10000;i++) {
		if(i%3 == 2)
			continue;
		else if(check(i))
			v.push_back(i);
	}
	v.push_back(19683);
	int t;
	cin >> t;
	while(t--) {
		int num;
		cin >> num;
		auto it = lower_bound(v.begin(), v.end(), num) - v.begin();
		cout << v[it] << '\n';
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
