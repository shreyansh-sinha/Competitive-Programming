#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector <pair <int, int> > vp;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n, s;
		cin >> n >> s;
		vector <int> v(n);
		for(int i=0;i<n;i++) {
			cin >> v[i];
		}
		int sum = 0, mx = 0, idx = -1, ans = 0;
		for(int i=0;i<n;i++) {
			sum += v[i];
			if(v[i] > mx) {
				mx = v[i];
				idx = i+1;
			}
			if(sum <= s) {
				ans = 0;
			}
			else if(sum - mx <= s) {
				ans = idx;
			}
		}
		cout << ans << endl;
	} 	   
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
