#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int r, c;
	cin >> r >> c;
	if(r == 1 and c == 1)
		cout << '0' << '\n';
	else {
		int ans[r][c];
		if(r == 1) {
			for(int i=0;i<r;i++) {
				for(int j=0;j<c;j++) {
					ans[i][j] = j+2;
				}
			}
		}
		else if(c == 1) {
			for(int i=0;i<r;i++) {
				for(int j=0;j<c;j++) {
					ans[i][j] = i+2;
				}
			}
		}
		else {
			for(int i=0;i<r;i++) {
				for(int j=0;j<c;j++) {
					ans[i][j] = (i+1)*(j+r+1);
				}
			}
		}
		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {
				cout << ans[i][j] << " ";
			}
			cout << '\n';
		}
		cout << '\n';
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