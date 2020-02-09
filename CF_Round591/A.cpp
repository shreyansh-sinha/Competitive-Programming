#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
        int q;
        cin >> q;
        while(q--) {
                int n;
                cin >> n;
                if(n == 2)
                        cout << '2' << '\n';
                else if(n%2 == 0)
                        cout << '0' << '\n';
                else {
                        cout << '1' << '\n';
                }
        }
        return ;
}
using namespace std;
int32_t main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        solve();
        return 0;
}

