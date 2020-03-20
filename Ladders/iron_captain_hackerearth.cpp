#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr1(n,0);
        vector<int>arr2(n,0);
        vector<int>dp1(n,0);
        vector<int>dp2(n,0);
        vector<int>cost1(n-1,0);
        vector<int>cost2(n-1,0);
        for(int i=0;i<n;i++)
        cin>>arr1[i];
        for(int i=0;i<n;i++)
        cin>>arr2[i];
        for(int i=0;i<n-1;i++)
        cin>>cost1[i];
        for(int i=0;i<n-1;i++)
        cin>>cost2[i];
        
        dp1[0]=arr1[0];
        dp2[0]=arr2[0];
        for(int i=1;i<n;i++)
        {
            dp1[i]=min(dp1[i-1]+arr1[i],dp2[i-1]+arr1[i]+cost2[i-1]);
            dp2[i]=min(dp2[i-1]+arr2[i],dp1[i-1]+arr2[i]+cost1[i-1]);
        }
        
        int res=min(dp1[n-1],dp2[n-1]);
        cout<<res<<endl;
        
        
    }
    return 0;
}