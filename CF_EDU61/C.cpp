#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
bool sortbydesc(const pair <int, int>&a, const pair <int, int>&b) {
	return ((a.second - a.first) >= (b.second - b.first));
}
bool check(int a[], int n, int start, int end) {
	int count = 0;
	for(int i=start;i<=end;i++) {
		if(a[i] == 0)
			count++;
	}
	if(count > 0)
		return true;
	return false;
}
void solve() {
        int n, q;
	cin >> n >> q;
	vector <pair <int, int> > v;
	for(int i=0;i<q;i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), sortbydesc);
//	for(auto x : v)
//		cout << x.first << " " << x.second << endl;
	int a[n] = {0};
	int count = 0;
	for(int i=0;i<q;i++) {
		if(check(a, n, v[i].first, v[i].second)) {
			for(int j=v[i].first;j<=v[i].second;j++)
				a[j] = 1;
			count++;
		}
		if(count == q-2)
			break;
	}
	int c = 0;
	for(int i=0;i<n;i++) {
//		cout << a[i] << " ";
		if(a[i] == 1)
			c++;
	}
	cout << c << '\n';
        return ;
}
int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        solve();
        return 0;
}

