#include <bits/stdc++.h>
#define int long long int
#define MAX 100007
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		vector <int> v1(n);
		vector <int> v2(m);
		for(int i=0;i<n;i++)
			cin >> v1[i];
		int ans = 0, j = 0;
		int visited[MAX] = {0};
		for(int i=0;i<m;i++) {
			cin >> v2[i];
			if(visited[v2[i]])
				ans++;
			else {
				while(v1[j] != v2[i]) {
					visited[v1[j]] = 1;
					j++;
				}
				ans += 2*(j-i) + 1;
			}
		}
		cout << ans << endl;
	}  
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
