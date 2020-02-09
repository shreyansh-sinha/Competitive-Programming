#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b+c >= 22)
    	cout << "bust" << '\n';
    else
    	cout << "win" << '\n';
    return ;
}
int32_t main() {
    FO;
    solve();
    return 0;
}