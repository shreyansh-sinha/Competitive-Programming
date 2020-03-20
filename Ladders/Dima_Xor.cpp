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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    vector <int> v;
    int cur_xor = 0;
    for(int i=0;i<n;i++) {
        v.pb(1);
        cur_xor = a[i][0] ^ cur_xor;
    }
    if(cur_xor != 0) {
        cout << "TAK" << endl;
        for(int x : v)
            cout << x << " ";
        cout << endl;
    }
    else {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(a[i][j] != a[i][0]) {
                    cout << "TAK" << endl;
                    for(int k=0;k<n;k++) {
                        if(k == i)
                            cout << j+1 << " ";
                        else
                            cout << '1' << " ";
                    }
                    cout << endl;
                    return;
                }
            }
        }
        cout << "NIE" << endl; 
    }
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}