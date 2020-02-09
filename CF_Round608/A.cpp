#include <bits/stdc++.h>
#define int long long int
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int32_t main()
{
	fastio();
	int n;
	cin>>n;
	string s;
	cin>>s;
	int w = 0, b = 0;
	for(int i=0;i<n;i++)
	{
		if(s[i] == 'W')
			w++;
		else
			b++;
	}
	vector <int> v;
	if(b == 0 or w == 0)
		cout<<0<<endl;
	else if(w%2==0)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i] == 'W'){
				s[i] = 'B';
				v.push_back(i+1);
				if(s[i+1] == 'W')
				{
					s[i+1] = 'B'; 
				}
				else
					s[i+1] = 'W';
			}
		}
		cout<<v.size()<<'\n';
		for(int x : v)
			cout<<x<<" ";
		cout<<endl;
	}
	else if(b%2==0){
		for(int i=0;i<n;i++)
		{
			if(s[i] == 'B'){
				s[i] = 'W';
				v.push_back(i+1);
				if(s[i+1] == 'B')
				{
					s[i+1] = 'W'; 
				}
				else
					s[i+1] = 'B';
			}
		}
		cout<<v.size()<<endl;
		for(int x : v)
			cout << x << " ";
		cout << '\n';
	}
	else
		cout <<"-1\n";
}