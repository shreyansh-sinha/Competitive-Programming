#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector <int> ans;
bool ar[100000001];
void seive() {
	int maxN = 100000000;
	ar[0] = ar[1] = true;

	for(int p=2; p*p<=100000001; p++) {
		if(ar[p] == false) {
			for(int i=p*p;i<=100000001;i+=p)
				ar[i] = true ;
		}
	}

	for(int p=2;p<=100000001;p++) {
		if(ar[p] == false)
			ans.pb(p);
	}
}
void solve() {
	seive();
	for(int i=0;i<ans.size();i+=100)
		cout << ans[i] << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
