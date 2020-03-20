#include <bits/stdc++.h>

// ---------------------------template starts here-------------------------- 

#define int long long int
#define pb push_back
#define MAX INT_MAX
#define F first
#define S second 
#define mp make_pair
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

// --------------------------template ends here------------------------------

void solve() {
    int n, m;
    cin >> n >> m;
    vector <int> v(n);
    vector <pair <int, int> > p;
    for(int i=0;i<n;i++) {
        cin >> v[i];
        p.pb(mp(v[i], i));
    } 
    vector <pair <int, int> > temp;
    for(int i=0;i<m;i++) {
        int x, y;
        cin >> x >> y;
        temp.pb(mp(x, y));
    }
    sort(p.begin(), p.end());
    for(auto x : p)
        cout << x.first << " " << x.second << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}