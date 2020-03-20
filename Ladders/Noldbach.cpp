#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
set <int> s;
vector <int> ans;
bool ar[100001];
void seive(int n) {
	ar[0] = ar[1] = true;

	for(int p=2; p*p<=n; p++) {
		if(ar[p] == false) {
			for(int i=p*p;i<=n;i+=p)
				ar[i] = true ;
		}
	}

	for(int p=2;p<=n;p++) {
		if(ar[p] == false) {
			s.insert(p);
			ans.pb(p);
		}
	}
}
bool possible(int num) {
	for(int i=0;i<ans.size()-1;i++) {
		if(ans[i]+ans[i+1] == num)
			return true;
	}
	return false;
}
void solve() {
	int n, k, c = 0;
	cin >> n >> k;
	seive(n);
	// for(int x : ans)
	// 	cout << x << " ";
	// cout << endl;
	for(int i=0;i<ans.size();++i) {
		int num = ans[i]-1;
		if(possible(num)) {
			// cout << num << endl;
			c++;
		}
	}
	if(c >= k)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
