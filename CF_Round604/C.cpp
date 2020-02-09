#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int> v, temp;
		set <int> s;
		int f[1000005] = {0};
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			f[x]++;
			v.push_back(x);
		//	temp.push_back(x);
			if(i >= n/2)
				s.insert(x);

		}
		// for(auto it = s.begin(); it != s.end(); ++it)
		// 	cout << *it << " ";
		// cout << endl;
		//sort(temp.begin(), temp.end());
		int c = n/2, gold;
		if(n < 6)
			cout << "0 0 0" << '\n';
		else {
			for(int i=n/2-1;i>=0;i--) {
				if(s.find(v[i]) != s.end())
					c--;
			}
			gold = f[v[0]];
			c -= gold;
			//cout << c << endl;
			int silver = c/2;
			int bronze = c - silver;
			//cout << silver << bronze << endl;
			set <int> b;
			for(int i=silver+gold;i<silver+gold+bronze;i++)
				b.insert(v[i]);
		// 	for(auto it = b.begin(); it != b.end(); ++it)
		// 	cout << *it << " ";
		// cout << endl;
			int cs = silver;
			int cb = bronze;
			for(int i=silver+gold-1;i>=gold;i--) {
				//cout << v[i] << " ";
				if(b.find(v[i]) != b.end()) {
					cs--;
					cb++;
				}
			}
			cout << gold << " " << cs << " " << cb << '\n'; 	
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

