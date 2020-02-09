				// *** partially solved *** //
#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		int len = str.length();
		int c = 0;
		for(int i=0;i<len;i++) {
			if(str[i] == str[i+1]) {
				if(str[i] != '?')
				c++;
			}
		}
		if(c > 0)
			cout << "-1" << '\n';
		else {
			for(int i=0;i<len;i++) {
				if(str[i] == '?') {
					if(i == 0) {
						if(str[i+1] == 'a')
							str[i] = 'b';
						else if(str[i+1] == 'b')
							str[i] = 'c';
						else
							str[i] = 'a';
					}
					else if(i == len-1) {
						if(str[i-1] == 'a')
							str[i] = 'b';
						else if(str[i-1] == 'b')
							str[i] = 'c';
						else if(str[i-1] == 'c')
							str[i] = 'a';
					}
					else {
						char prev = str[i-1];
						char next = str[i+1];
						if(prev == 'a' && next == 'b')
							str[i] = 'c';
						else if(prev == 'b' && next == 'c')
							str[i] = 'a';
						else if(prev == 'c' && next == 'a')
							str[i] = 'b';
						else if(prev == 'a' && next == '?')
							str[i] = 'b';
						else if(prev == 'b' && next == '?')
							str[i] = 'c';
						else if(prev == 'c' && next == '?')
							str[i] = 'a';
						if(prev == 'b' && next == 'a')
							str[i] = 'c';
						else if(prev == 'c' && next == 'b')
							str[i] = 'a';
						else if(prev == 'a' && next == 'c')
							str[i] = 'b';
						else if(prev == '?' && next == 'a')
							str[i] = 'b';
						else if(prev == '?' && next == 'b')
							str[i] = 'c';
						else if(prev == '?' && next == 'c')
							str[i] = 'a';
						else if(prev == next) {
							if(prev == 'a')
								str[i] = 'b';
							else if(prev == 'b')
								str[i] = 'c';
							else 
								str[i] = 'a';
						}
					}
				}
			}
			cout << str << '\n';
		}
	}
	return;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}

