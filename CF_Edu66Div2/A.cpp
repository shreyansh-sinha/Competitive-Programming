#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int c = 0;
		while(n > 0) {
			if(n%k == 0) {
				n /= k;
				c++;
			}
			else {
				c += n%k;
				n -= n%k;
			}
		}
		cout << c << endl;
	} 
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
