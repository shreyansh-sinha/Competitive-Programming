#include <bits/stdc++.h>

// ---------------------------template starts here-------------------------- 

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

// --------------------------template ends here------------------------------

void solve() {
    int s, x1;
    cin >> s >> x1;
    int a = (s-x1)/2;
    int temp = x1 & a;
    if((s-x1)%2 != 0 || (s-x1) < 0 || temp != 0)
        cout << '0' << endl;
    else {
        int c = 0, x = x1;
        while(x > 0) {
            c += x & 1;
            int a1 = x & 1;
            // cout << a1 << endl;
            x = x / 2;
        }
        // since we have to take only positive so we should exclude
        // the pair (sum, 0) and (0, sum) as 0 is not positive.
        // so two pairs are excluded
        if((s-x1) == 0)
            cout << (1LL << c) - 2 << endl;
        else
            cout << (1LL << c) << endl;
    }
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}