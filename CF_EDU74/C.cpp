#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
        int q;
        cin >> q;
        while(q--) {
                int h, n;
		cin >> h >> n;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		int count = 0;
		for(int i=0;i<n;) {
			if(i < n-1) {
				if(a[i] - a[i+1] == 1) {
					if(i < n-2) {
						if(a[i+1] - a[i+2] == 1) {
							i += 2;
						}
						else {
							i++;
						       	a[i]--;
					       		count++;		       
						}
					}
					else {
						if(a[i] > 2)
							count++;
						break;
					}
				}
				else
					a[i] = a[i+1] + 1;
			}
			else
				break;	
		}
		cout << count << '\n';
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


