#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	int t;
	cin >> t;
	//int a = 'a';
	//bool a = true;
	while(t--) {
		int n;
		cin >> n;
		string str[n];
		set <string> s;
		vector <int> v;
		int c = 0;
		for(int i=0;i<n;i++) {
			cin >> str[i];
			if(s.find(str[i]) == s.end())
				s.insert(str[i]);
			else {
				v.push_back(i);
				c++;
			}
		}
		for(int i=0;i<v.size();i++) {
			int ind = v[i];
			for(str[ind][0] = '0';str[ind][0] <= '9'; str[ind][0]++) {
				if(s.find(str[ind]) == s.end())
					break;
			}
				s.insert(str[ind]);
		}
		cout << c << '\n';
		for(int i=0;i<n;i++)
			cout << str[i].c_str() << '\n';
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