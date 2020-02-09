#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		int len = str.length();
		int l = 0, r = 0, u = 0, d = 0;
		for(int i=0;i<len;i++) {
			if(str[i] == 'L')
				l++;
			else if(str[i] == 'R')
				r++;
			else if(str[i] == 'U')
				u++;
			else
				d++;
		}
		if(u == 0 || d == 0) {
			if(l > 0 && r > 0)
				cout << "2\nLR\n";
			else
				cout << "0\n";
		}
		else if(l == 0 || r == 0) {
			if(u > 0 && d > 0)
				cout << "2\nUD\n";
			else
				cout << "0\n";				
		}
		else {
			int hor = min(l, r);
			int ver = min(u, d);
			cout << hor*2+ver*2 << '\n';
			for(int i=0;i<hor;i++)
					cout << 'L';
			for(int i=0;i<ver;i++)
				cout << 'U';
			for(int i=0;i<hor;i++)
				cout << 'R';
			for(int i=0;i<ver;i++)
				cout << 'D';
			cout << '\n';
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
