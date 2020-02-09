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
		int a, b, x;
		cin >> a >> b;
		x = b;
		if(b < 9)
			cout << '0' << endl;
		else {
			int c = 0, d, temp;
			while(b > 0) {
				temp = b%10;
				b = b/10; 
				c++;
			}
			d = c;
			if(temp == 9) {
				int high = 0;
				while(c > 0) {
					high = high*10 + 9;
					c--;
				}
				if(high > x) {
					d--;
					cout << a*d << endl;
				}
				else
					cout << a*d << endl;
			}
			else {
				d--;
				cout << a*d << endl;
			}
		}
	} 
    return 0;
}
