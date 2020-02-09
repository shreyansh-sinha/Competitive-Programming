#include <bits/stdc++.h>
#define int long long int
using namespace std;
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
	    int zero = 0, sum = 0, even = 0;
	    int len = str.length();
	    for(int i=0;i<len;i++) {
	    	if(str[i] == '0')
	    		zero++;
	    	else if ((str[i] - '0')%2 == 0)
	    		even++;
	    	sum  += (str[i] - '0');
	    }
	    if(zero == 0) {
	    	cout << "cyan" << '\n';
	    }
	    else if(zero == 1) {
	    	if(even > 0 && sum%3 == 0)
	    		cout << "red" << '\n';
	    	else
	    		cout << "cyan" << '\n';
	    }
	    else {
	    	if(sum%3 == 0)
	    		cout << "red" << '\n';
	    	else
	    		cout << "cyan" << '\n';
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