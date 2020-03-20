#include <bits/stdc++.h>

// ---------------------------template starts here-------------------------- 

#define int long long int
#define pb push_back
#define MAX INT_MAX
#define first F
#define second S 
#define make_pair mp
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
    int n, w;
    cin >> n >> w;
    vector <int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    int left = 0, right = w, sum = 0;
    for(int i=0;i<n;i++) {
        sum += v[i];
        left = max(left, -sum);
        right = min(right, w - sum);
    }
    if(left > right)
        cout << '0' << endl;
    else
        cout << right-left+1 << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}