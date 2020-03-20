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
void solve() {
	int n;
	cin >> n;
	seive();
	// for(auto it = s.begin(); it != s.end(); ++it)
	// 	cout << *it << " ";
	// cout << endl;
	if(n <= 2)
		cout << '1' << endl;
	else
		cout << '2' << endl;
	for(int i=2;i<=n+1;i++) {
		if(s.find(i) != s.end())
			cout << '1' << " ";
		else
			cout << '2' << " ";
	}
	cout << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
