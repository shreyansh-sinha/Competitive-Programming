#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
        int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int> v1(n);
		int f1[2] = {0};
		for(int i=0;i<n;i++) {
			cin >> v1[i];
			if(v1[i]%2 == 0)
				f1[0]++;
			else
				f1[1]++;
		}
		int m;
		cin >> m;
		vector <int> v2(m);
		int f2[2] = {0};
		for(int i=0;i<m;i++) {
			cin >> v2[i];
			if(v2[i]%2 == 0)
				f2[0]++;
			else
				f2[1]++;
		}
		int count = f1[0]*f2[0] + f1[1]*f2[1];
		cout << count << endl;
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

