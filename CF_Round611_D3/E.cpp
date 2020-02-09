#include <bits/stdc++.h>
#define int long long int
#define MAX 200005
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int n;
	cin >> n;
	vector <int> v(n), v1(n), v2(n);
	int visited[MAX] = {0};
	for(int i=0;i<n;i++) {
		cin >> v[i];
		v1[i] = v[i];
		v2[i] = v[i];
	}
	sort(v.begin(), v.end());
	set <int> mn;
	set <int> mx;
	for(int i=0;i<n-1;i++) {
			if(binary_search(v.begin(), v.end(), v1[i]+1))
				v1[i]++;
	} 
	for(int x : v1)
		mn.insert(x);
	int c = 0;
	for(int i=0;i<n;i++) {
		if(visited[v[i]] != 0 && visited[v[i]-1] != 0 && visited[v[i]+1] != 0)
			visited[v[i]]++;
		else if(visited[v[i]] == 0)
			visited[v[i]] = 1;
		else if(visited[v[i]-1] == 0)
			visited[v[i]-1] = 1;
		else if(visited[v[i]+1] == 0)
			visited[v[i]+1] = 1;
	}
	for(int i=0;i<MAX;i++) {
		if(visited[i] != 0)
			c++;
	}
	cout << mn.size() << " " << c << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
