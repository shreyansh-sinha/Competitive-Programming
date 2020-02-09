#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int> v;
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		int count = 0;
		for(int i=0;i<n-1;i++) {
			if(v[i+1]-v[i] == 1)
				count++;
		}
		if(count > 0)
			cout << '2' << '\n';
		else
			cout << '1' << '\n';
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
