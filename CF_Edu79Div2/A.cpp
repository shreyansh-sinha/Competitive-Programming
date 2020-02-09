#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
 		int t;
 	   	cin >> t;
 	   	while(t--) {
 	   	int a[3];
 	   	cin >> a[0] >> a[1] >> a[2];
 	   	sort(a, a+3);
 	   	if(a[0]+a[1] >= a[2])
 	   		cout << "Yes" << '\n';
 	   	else {
 	   		if(abs(a[0]+a[1]-a[2]) <= 1)
 	   			cout << "Yes" << '\n';
 	   		else
 	   			cout << "No" << '\n';
 	   	}
 	   	
 	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
