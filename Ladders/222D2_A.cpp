#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
    int a, b;
    cin >> a >> b;
    for(int i=1;i<=6;i++) {
        if(abs(a-i) > abs(b-i))
            c1++;
        else if(abs(b-i) > abs(a-i))
            c2++;
    }
    cout << c1 << " " << 6-(c1+c2) << c2;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}
