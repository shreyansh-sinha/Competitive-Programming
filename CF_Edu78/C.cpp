#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int> v(2*n);
		int l1 = 0, l2 = 0, r1 = 0, r2 = 0;
		int x = 0;
		for(int i=0;i<2*n;i++) {
			cin >> v[i];
			if(i < n) {
				if(v[i] == 1)
					l1++;
				else
					l2++;
			}
			else {
				if(v[i] == 1)
					r1++;
				else
					r2++;
			}
		}
		if(l1+r1 == 2*n || l2+r2 == 2*n)
			cout << 2*n << endl;
		else if(l1+r1 == l2+r2)
			cout << '0' << endl;
		else {
			int mid;
			auto it = v.begin();
			while(1) {
				
			
			}
			cout << 2*n - v.size() << endl;
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