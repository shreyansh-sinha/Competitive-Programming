#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		string p, h;
		cin >> p >> h;
		int l1 = p.length();
		int l2 = h.length();
		if(l1 > l2)
			cout << "NO" << '\n';
		else {
			sort(p.begin(), p.end());
			int flag = 0;
			for(int i=0;i<l2;i++) {
				string temp = h.substr(i, l1);
				sort(temp.begin(), temp.end());
				if(temp == p) {
					flag = 1;
					break;
				}
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