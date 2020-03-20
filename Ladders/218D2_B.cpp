#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
	int a, b;
	cin >> a >> b;
	if(a == b)
		cout << '0' << endl;
	else {
		int a1 = 0, b1 = 0, c1 = 0;
		int a2 = 0, b2 = 0, c2 = 0;

		while(a%2 == 0) {
			a = a/2;
			a1++;
		}
		while(a%3 == 0) {
			a = a/3;
			b1++;
		}
		while(a%5 == 0) {
			a = a/5;
			c1++;
		}
		while(b%2 == 0) {
			b = b/2;
			a2++;
		}
		while(b%3 == 0) {
			b = b/3;
			b2++;
		}
		while(b%5 == 0) {
			b = b/5;
			c2++;
		}
		if(a != b)
			cout << "-1" << endl;
		else
			cout << abs(a1-a2) + abs(b1-b2) + abs(c1-c2) << endl;
	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
