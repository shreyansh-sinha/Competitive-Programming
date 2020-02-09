#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			cin >> a[i];
		int ans[n];
		//int j = 0;
		for(int i=1;i<=n;i++) {
			int start = a[i];
			int count = 0;
			while(1) {
				start = a[start];
				count++;
				if(start == a[i])
					break;	
			}
			cout << count << " ";	
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

