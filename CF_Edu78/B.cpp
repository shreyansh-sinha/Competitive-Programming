#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector <int> v;
void solve() {
	int t;
	cin >> t;
	for(int i=0;i<10005;i++)
		v.push_back((i*(i+1))/2);
	while(t--) {
		int a, b;
		cin >> a >> b;
		if(a > b)
			swap(a, b);
		if(a == b)
			cout << '0' << '\n';
		else {
			int diff = abs(a-b);
			if(binary_search(v.begin(), v.end(), diff)) {
				int root = sqrt(1+8*diff);
				cout << (root-1)/2 << '\n';
			}
			else {
				int sum = a+b;
				int i=1;
				int ans;
				while(sum <= 5000000009) {
					sum = sum+i;
					if(sum%2 == 0) {
						int ele = sum/2;
						if(ele > max(a, b)) {
							ans = i;
							break;
						}
					}
					i++;
				}
				cout << ans << '\n';
			}
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