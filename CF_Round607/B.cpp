				// *** partially solved *** //
#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		string s, c;
		cin >> s >> c;
		if(s < c)
			cout << s << '\n';
		else {
			int flag = 0;
			int l1 = s.length();
			int l2 = c.length();
				for(int i=0;i<l1;i++) {
					for(int j=i+1;j<l1;j++) {
						if(s[i]-'A' > s[j]-'A') {
							swap(s[i], s[j]);
							 if(s < c)  {
								flag = 1;
								break;
							}
							else {
								swap(s[i], s[j]);
							}
						}
					}
					if(flag == 1)
						break;
				}
				if(flag == 1)
					cout << s << '\n';
				else
					cout << "---" << '\n';
			}
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

