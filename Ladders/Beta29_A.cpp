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
	vector <pair <int, int> > v;
	// int a[n];
	for(int i=0;i<n;i++) {
		int x, y;
		cin >> x >> y;
		// a[i] = x;
		v.push_back(make_pair(x, y));
	}
	int c = 0, flag = 0;
	for(int i=0;i<n;i++) {
		int x=v[i].first + v[i].second;
		for(int j=i+1;j<n;j++) {
			if(v[j].first == x) {
				if(x+v[j].second == v[i].first) {
					flag = 1;
					break;
				}
			}
		}
		if(flag)
			break;
	}
	if(flag == 1)
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
