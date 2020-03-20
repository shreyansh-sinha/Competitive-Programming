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
bool prime[1000001];
bool prime_prime[1000001];
int prime_prime_count[1000001] = {0};

void seive() {

	memset(prime, true, sizeof(prime));

	for(int i=2;i*i<=1000001;i++) {
		if(prime[i]) {
			for(int j=i*2;j<=1000001;j+=i) {
				prime[j] = false;
			}
		}
	}

	prime[0] = false;
	prime[1] = false;
	prime[2] = true;

	int f = 0;
	for(int i=1;i<=1000001;i++) {
		if(prime[i])
			f++;
		if(prime[f]) {
			prime_prime[i] = true;
		}
	}

	int c = 0;
	for(int i=1;i<=1000001;i++) {
		if(prime_prime[i])
			c++;
		prime_prime_count[i] = c;
	}
}
void solve() {
	seive();
	int t;
	cin >> t;
	while(t--) {
		int l, r;
		cin >> l >> r;
		cout << prime_prime_count[r] - prime_prime_count[l-1] << endl;
	}
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
} 