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
    vector <int> v1(n), v2(m);
    for(int i=0;i<n;i++)
        cin >> v1[i];
    vector <int> temp;
    for(int i=0;i<m;i++)
        cin >> v2[i];
    temp.pb(v1[0]);
    int sum = v1[0];
    for(int i=1;i<n;i++) {
        sum += v1[i];
        temp.pb(sum);
    }
    vector <pair <int, int> > ans;
    for(int i=0;i<m;i++) {
        auto it = lower_bound(temp.begin(), temp.end(), v2[i]);
        // cout << *it << " ";
        auto idx = (it - temp.begin()) + 1;
        int content;
        if(idx == 1) 
            content = v2[i];
        else
            content = abs(v2[i] - *(it-1)) % v1[idx-1];
        if(content == 0)
            content = v1[idx-1];
        ans.pb(make_pair(idx, content));
    }
    for(auto it : ans)
        cout << it.first << " " << it.second << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}