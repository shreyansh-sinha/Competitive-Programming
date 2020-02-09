#include <bits/stdc++.h>
using namespace std;
void solve() {
        int t;
	cin >> t;
	while(t--) {
		int a[3];
		for(int i=0;<3;i++)
			cin >> a[i];
		int sum = 0;
		if(a[1] == 0)
			cout << '0' << '\n';
		else if(a[1] == 1) {
			if(a[2] < 2)
				cout << '0' << '\n';
			else
				cout << '3' << '\n';
		}
		else if(a[1] > 1) {
			if(a[0] >= a[2]) {

			}
			else {

			}
		}

	}
        return ;
}
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        solve();
        return 0;
}

