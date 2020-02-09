#include <bits/stdc++.h>
#define int long long int
#define MAX 1000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve() {
    string str;
    cin >> str;
    
    int c = 0;
    int len = str.length();
    for(int i=0;i<len/2;i++) {
    if(str[i] != str[len-1-i])
        c++;
    }
    cout << c << endl;
    return ;
}
int32_t main() {
    FO;
    solve();
    return 0;
}