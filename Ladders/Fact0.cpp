#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
set <int> s;
vector <int> v;
bool ar[100001];
void seive() {
	ar[0] = ar[1] = true;

	for(int p=2; p*p<=100001; p++) {
		if(ar[p] == false) {
			for(int i=p*p;i<=100001;i+=p)
				ar[i] = true ;
		}
	}

	for(int p=2;p<=100001;p++) {
		if(ar[p] == false) {
			s.insert(p);
			v.pb(p);
		}
	}
}
void solve() {
	int n, c;
	while(true) {
		cin >> n;
		if(n == 0)
			break;
	for(int i=2;i*i<=n;i++) {
		if(n%i == 0) {
			c = 0;
			while(n%i == 0) {
				c++;
				n = n/i;
			}
			cout << i << '^' << c << " ";
		}
	}
	if(n > 1)
		cout << n << '^' << 1 << " ";
	cout << endl;
	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}