#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
    int n;
    cin >> n;
    int k1, k2;
    cin >> k1;
    deque <int> v1;
    for(int i=0;i<k1;i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    cin >> k2;
    deque <int> v2;
    for(int i=0;i<k2;i++) {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    int c = 0;
    while(c < MAX) {
        if(v1.empty()) {
            cout << c << " " << '2' << '\n';
            return;
        }
        else if(v2.empty()) {
            cout << c << " " << '1' << '\n';
            return;
        }
        else {
            int z1 = v1.front();
            int z2 = v2.front();
            if(z2 > z1) {
                int x = v1.front();
                v1.pop_front();
                v2.push_back(x);
                int y = v2.front();
                v2.pop_front();
                v2.push_back(y);
            }
            else {
                int x = v2.front();
                v2.pop_front();
                v1.push_back(x);
                int y = v1.front();
                v1.pop_front();
                v1.push_back(y);
            }
        }
        c++;
    }
    cout << "-1" << '\n';
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}