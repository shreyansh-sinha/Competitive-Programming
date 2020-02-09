#include <bits/stdc++.h>
#define MOD 1000000007
#define int long long int
using namespace std;
bool check(string str) {
	int count = 0;
	for(int i=0;i<str.length();i++) {
		
	}
}	
void solve() {
	int len;
	cin >> len;
	string str;
	cin >> str;
	int count = 0;
	for(int i=0;i<str.length();i++) {
		string temp = str.substr(str, i);
		if(temp.length() >= 2) {
			if(check(temp))
				count++;
		}
	}
	cout << count << '\n';
	return ;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	retur 0;
}
