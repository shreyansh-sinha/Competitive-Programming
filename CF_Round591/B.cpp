#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int q;
	cin >> q;
	while(q--) {
		string s, t;
		cin >> s >> t;
		set <char> s1;
		int len = s.length();
		for(int i=0;i<len;i++)
			s1.insert(s[i]);
		char common;
		int flag = 0;
		for(int i=0;i<len;i++) {
			if(s1.find(t[i]) != s1.end()) {
				common = t[i];
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';
	}
	return ;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}
