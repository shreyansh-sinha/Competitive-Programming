#include <bits/stdc++.h>
using namespace std;
void solve() {
	int len;
	cin >> len;
	string str;
	cin >> str;
	vector <char> v;
	for(int i=0;i<len-1;i++) {
		if(str[i] == str[i+1])
			continue;
		v.push_back(str[i]);
	}
	cout << v.size() << '\n';
	return ;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	solve();
	return 0;
}
