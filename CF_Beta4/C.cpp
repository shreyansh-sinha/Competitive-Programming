#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
    int n;
    cin >> n;
    map <string, int> s;
    vector <string> v;
    for(int i=0;i<n;i++) {
        string str;
        cin >> str;
        v.push_back(str);
    }
    for(int i=0;i<n;i++) {
        if(s.find(v[i]) == s.end()) {
            cout << "OK" << '\n';
            s.insert(pair<string, int>(v[i], 0));
        }
        else {
            cout << v[i] << s[v[i]] + 1 << '\n';
            s[v[i]]++;
        }
    }
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}