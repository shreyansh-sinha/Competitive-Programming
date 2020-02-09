#include <bits/stdc++.h>
#define int long long int
#define MOD 1000000007
using namespace std;
void solve() {
	int l, k;
	cin >> l >> k;
	string str;
	cin >> str;
	vector <char> v;
	for(int i=0;i<k;i++) {
		char ch;
		cin >> ch;
		v.push_back(ch);
	}
	sort(v.begin(), v.end());
	for(int i=0;i<l;i++) {
		if(binary_search(v.begin(), v.end(), str[i]))
			continue;
		else
			str[i] = '4';
	}
	//cout << str[3];
	int c = 0, count = 0;
	for(int i=0;i<l;i++) {
		if(str[i] == '4') {
			count += c*(c+1)/2;
			//cout << count;
			c =0;
		}
		else if(i == l-1) {
			c++;
			count += c*(c+1)/2;
		}
		else
			c++;
	}
	cout << count << '\n';
	return ;
}
int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}
