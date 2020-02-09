#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n < 15)
			cout << "NO" << '\n';
		else {
			int c = 1;
			int flag = 0;
			while(c <= 6) {
				if((n-c) % 14 == 0) {
					flag = 1;
					break;
				}
				c++;
			}
			if(flag == 1)
				cout << "YES" << '\n';
			else
				cout << "NO" << '\n';
		}
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