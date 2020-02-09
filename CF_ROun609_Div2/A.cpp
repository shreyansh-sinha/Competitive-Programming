#include <bits/stdc++.h>
#define int long long int
#define MAX INT_MAX
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool is_prime(int n) {
	if(n == 2 || n == 3)
		return true;
	for(int i=2;i*i <= n; i++) {
		if(n%i == 0)
			return false;
	}
	return true;
}
bool is_composite(int n) {
	if(is_prime(n))
		return false;
	return true;
}
using namespace std;
void solve() {
    int n;
    cin >> n;
    int a = 4;
    int t = n;
    while(1) {
    	t = n+a;
    	//cout << n << endl;
    	if(is_composite(t) && is_composite(a))
    		break;
    	a++;
    }
    cout << t << " " << a << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
