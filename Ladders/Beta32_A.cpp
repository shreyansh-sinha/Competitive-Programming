#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int n, d;
	cin >> n >> d;
	vector <int> v;
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int c = 0;
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			if(abs(v[j]-v[i]) <= d)
				c++;
		}
	}
	cout << 2*c << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
