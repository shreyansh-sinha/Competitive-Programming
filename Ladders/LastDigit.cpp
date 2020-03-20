#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
set <int> s;
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
		if(ar[p] == false)
			s.insert(p);
	}
}
int modExp(int a, int n, int p) {
	int res = 1;
	while(n > 0) {
		if(n%2 != 0) {
			res = (res*a)%p;
			n--;
		}
		else {
			a = (a*a)%p;
			n = n/2;
		}
	}
	return res;
}
void solve() {
	int t;
	cin >> t;
	while(t--) {
		int a, n, p;
		cin >> a >> n;
		cout << modExp(a, n, 10) << endl;
	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}