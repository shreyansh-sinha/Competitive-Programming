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

bool is_palindrome(string str) {
    int len = str.length();
    for(int i=0;i<=len/2;i++) {
        if(str[i] != str[len-1-i])
            return false;
    }
    return true;
}

bool mysort(const pair <int, int> &a, const pair <int, int> &b) {
    return a.second < b.second;
}
// --------------------------template ends here------------------------------

void solve() {
    int n;
    cin >> n;
    vector <int> v(n);
    vector <pair <int, int> > p;
    for(int i=0;i<n;i++) {
        cin >> v[i];  
        p.pb(mp(v[i], i));
    }
    sort(p.begin(), p.end());
    int unused = p[0].first;
    for(int i=1;i<n;i++) {
        if(p[i].first > unused) {
            unused = p[i].first;
        }
        else {
            unused++;
            p[i].first = unused;
        }
    }
    sort(p.begin(), p.end(), mysort);
    for(auto x : p)
        cout << x.first << " ";
    cout << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}