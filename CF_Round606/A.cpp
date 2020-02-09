				// *** partially solved *** //
#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
bool all_same(string s) 
{ 
    return (s.find_first_not_of(s[0]) == string::npos); 
}
void solve() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		
		// object from the class stringstream 
    	stringstream geek(str); 
  
    	// The object has the value 12345 and stream 
    	// it to the integer x 
    	int num = 0; 
    	geek >> num; 
		int len = str.length();
		if(len == 1)
			cout << str << '\n';
		else if(len == 10)
			cout << "81" << '\n';
		else if(str == "10") 
			cout << '9' << '\n';
		else {
			int a[10];
			a[1] = 1;
			for(int i=2;i<=9;i++)
				a[i] = a[i-1]+9;
			if(all_same(str)) {
				int start = a[len];
				int c = (str[0] - '0');
				cout << start+c-1 << '\n';
			}
			else {
				int start = a[len];
				int c = (str[0] - '0');
				int curr = 0;
				for(int i=0;i<len;i++)
					curr = curr*10+c;
				//cout << curr << '\n';
				if(curr < num)
					cout << start+c-1 << '\n';
				else
					cout << start+c-2 << '\n';			
			}
		}
	}
	return ;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}

