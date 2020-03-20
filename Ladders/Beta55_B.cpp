#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool all_even(vector <int> v) {
	int size = v.size();
	for(int i=0;i<size;i++) {
		if(v[i]%2 != 0)
			return false;
	}
	return true;
}
void solve() {
	int n;
	cin >> n;
	vector <int> v(n);
	int sum = 0; 
	for(int i=0;i<n;i++) {
		cin >> v[i];
		sum += v[i];
	}
	if(all_even(v)) {
		cout << '0' << endl;
		return ;
	}
	// cout << sum << "check" << endl;
	sort(v.begin(), v.end());
	if(sum%2 != 0)
		cout << sum << endl;
	else {
		int mn = INT_MAX;
		sort(v.begin(), v.end());
		for(int i=0;i<n;i++) {
			if(v[i]%2 != 0)
				mn = min(mn, v[i]);
		}
		// cout << mn << endl;
		cout << sum-mn << endl;
	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
