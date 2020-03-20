#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int n, m;
	cin >> n >> m;
	int on[m] = {0};
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		for(int i=0;i<x;i++) {
			int y;
			cin >> y;
			y--;
			if(on[y] == 0)
				on[y] = 1;
		}
	}
	int sum = 0;
	for(int i=0;i<m;i++)
		sum += on[i];
	if(sum == m)
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
