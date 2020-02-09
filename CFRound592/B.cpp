#include <bits/stdc++.h>
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		int len = str.length();
		for(int i=0;i<len;i++) {
			if(str[i] == '1')
				count++;
		}
		if(count > 1
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}
