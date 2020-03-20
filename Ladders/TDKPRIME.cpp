#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector <int> ans;
bool ar[90000001];
void seive() {
	int maxN = 90000000;
	ar[0] = ar[1] = true;

	for(int p=2; p*p<=90000001; p++) {
		if(ar[p] == false) {
			for(int i=p*p;i<=90000001;i+=p)
				ar[i] = true ;
		}
	}

	for(int p=2;p<=90000001;p++) {
		if(ar[p] == false)
			ans.pb(p);
	}
}
void solve() {
	int t;
	cin >> t;
	seive();
	// cout << ans.size() << endl;
	// for(int x : ans)
	// 	cout << x << " ";
	// cout << endl;
	cout << endl;
	while(t--) {
		int n;
		cin >> n;
		n--;
		cout << ans[n] << endl;
	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
