#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
        int q;
        cin >> q;
        while(q--) {
                int n, r;
		cin >> n >> r;
		int a[n];
		int f[100005] = {0};
		for(int i=0;i<n;i++) {
			cin >> a[i];
			f[a[i]]++;
		}
		int count = 0;
		for(int i=100000;i>=1;i--) {
			if(f[i] != 0) {
				int new_ = i - count*r;
				if(new_ <= 0)
					break;
				count++;
			}
		}
		cout << count << '\n';
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

