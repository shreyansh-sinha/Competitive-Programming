#include <bits/stdc++.h>
using namespace std;
void solve() {
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
	for(int i=0;i<n;i++) {
		for(int j=i+1;j<n;j++) {
			count += lower_bound(v.begin(), v.end(), v[i]+v[j]) - v.begin() - j -1;
		}
	}
	cout << count << endl;
	return ;	
}
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        solve();
        return 0;
}

