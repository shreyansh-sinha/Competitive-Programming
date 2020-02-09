				// *** partially solved *** //
#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
int countTrailingZero(int x) 
{ 
  int count = 0; 
  while ((x & 1) == 0) 
  { 
      x = x >> 1; 
      count++; 
  } 
  return count; 
}
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector <int> v(n);
		int odd = 0;
		for(int i=0;i<n;i++) { 
			cin >> v[i];
			if(v[i]%2 != 0)
				odd++;
		}
		if(odd == n)
			cout << '0' << '\n';
		else {
			set <int> s;
			for(int i=0;i<n;i++)
				s.insert(v[i]);
			int c = 0, mx;
			while(1) {
				if(s.size() > 0)
				mx = *s.rbegin();
				if(mx%2 != 0) {
					auto it = s.rbegin();
					s.erase(*it);
				}
				else {
					//cout << mx << " ";
					c++;
			//		cout << countTrailingZero(mx) << " ";
					auto it = s.rbegin();
					int z = *it;
					s.erase(*it);
					if(z%2 == 0)
					s.insert(z/2);
				}
				if(s.size() == 0)
					break;
			}
			cout << c << '\n';
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

