#include <bits/stdc++.h>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
	cin >> t;
	while(t--) {
		int n, k, d;
		cin >> n >> k >> d;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		int mn = n;
		for(int i=0;i<n-d+1;i++) {
			set <int> s;
			int c = d;
			int j=i;
			while(c--) {
				s.insert(a[j]);
				j++;
			}
			if(s.size() < mn)
				mn = s.size();
		}
		cout << mn << '\n';
	}	
	return 0;
}

