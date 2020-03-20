#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector <int> v;
	// int f[2005] = {0};
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		// f[x]++;
		v.pb(x);
	}
	for(int i=0;i<n;i++) {
		int count = 0;
		for(int j=0;j<n;j++) {
			if(v[j] > v[i])
				count++;
		}
		cout << 1+count << " ";
	}
	cout << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
