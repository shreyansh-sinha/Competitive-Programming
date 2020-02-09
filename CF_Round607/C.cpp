				// *** partially solved *** //
#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int x;
		cin >> x;
		string str;
		cin >> str;
		int l = 0, l3, c = 0;
		while(1) {
			string temp = "";
			int temp1;
			if(c < str.length())
				temp1 = str[c] - '0';
			else
				break;
			c++;
			for(int i=0;i<l+1;i++) {
				temp += str[i];
			}
			//cout << temp << " ";
			if(l == x)
				break;
			else {
				str.erase(str.begin(), str.begin()+l+1);
				for(int i=0;i<temp1;i++)
					temp += str;
				str = temp;
			//cout << str << endl;
				l++;
			}

		}
		cout << str.length()% MOD << '\n';
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

