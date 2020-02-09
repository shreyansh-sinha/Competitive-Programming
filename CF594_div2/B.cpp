#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
        int n;
        cin >> n;
        vector <int> v(n);
        //int sum = 0;
        for(int i=0;i<n;i++) {
                int x;
                cin >> x;
                v.push_back(x);
              //  sum += x;
        }
        sort(v.begin(), v.end(), greater<int>());
        int x = 0, y = 0;
        for(int i=0;i<(n+1)/2;i++)
                x += v[i];
        for(int i=(n+1)/2;i<n;i++)
            y += v[i];
        //cout << x << y << endl;
        cout << y*y + x*x << '\n';
        return ;
}
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        solve();
        return 0;
}

