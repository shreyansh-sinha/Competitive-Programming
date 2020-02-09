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
		string t1 = "";
		string t2 = "";
		string t3 = "";
		for(int i=len-2;i<len;i++)
			t1 += str[i];
				for(int i=len-4;i<len;i++)
			t2 += str[i];
				for(int i=len-5;i<len;i++)
			t3 += str[i];
		if(t1 == "po")
			cout << "FILIPINO" << '\n';
		else if(t2 == "desu" || t2 == "masu")
			cout << "JAPANESE" << '\n';
		else if(t3 == "mnida")
			cout << "KOREAN" << '\n';
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

