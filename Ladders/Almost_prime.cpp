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
bool possible(int n) {
	set <int> temp;
	if(s.find(n) != s.end())
		return false;
	
	for(int i=2;i*i<=n;i++) {
		if(n%i == 0) {
			if(s.find(i) != s.end())
				temp.insert(i);
			if(s.find(n/i) != s.end())
				temp.insert(n/i);
		}
	}
	// for(auto it = temp.begin(); it != temp.end(); ++it)
	// 	cout << *it << " ";
	// cout << endl;
	if(temp.size() == 2)
		return true;
	return false;
}
void solve() {
	int n;
	cin >> n;
	seive();
	int c = 0;
	for(int i=2;i<=n;i++) {
		if(possible(i)) {
			// cout << i << endl;
			c++;
		}
	}
	cout << c;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}