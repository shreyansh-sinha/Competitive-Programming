#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define v vector
#define MAX INT_MAX
#define MIN INT_MIN
#define MOD 1000000007
#define sort sort(v.begin(), v.end())
using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
 	cin >> t;
 	while(t--) {
 		int n, d;
 		cin >> n >> d;
 		if(d <= n)
 			cout << "YES" << endl;
 		else {
 			int flag = 0;
 			for(int x=1;x<=n;x++) {
 				if(x + (d+x)/(x+1) <= n) {
 					cout << "YES" << endl;
 					flag = 1;
 					break;
 				}
 			}
 			if(flag == 0)
 				cout << "NO" << endl;
 		}
 	}   
    return 0;
}
