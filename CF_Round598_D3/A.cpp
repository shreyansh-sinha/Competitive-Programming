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
 		int a, b, n, s, flag = 0;
 		cin >> a >> b >> n >> s;
 		if(s%n <= b && a*n+b >= s)
 			cout << "YES" << endl;
 		else
 			cout << "NO" << endl;
 	}   
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
