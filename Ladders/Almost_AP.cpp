#include <bits/stdc++.h>
#define DIM 100007
#define INF 1000000007
using namespace std;
 
long long n,b[DIM];
int main()
{
    cin>>n;
    for(int i = 1;i<=n;++i)
        cin>>b[i];
 
    long long res = INF;
 
    for(int k1 = -1; k1<=1;++k1)
        for(int k2 = -1;k2<=1;++k2)
    {
        long long d = b[2]+k2 - b[1] - k1,last = b[2] +k2,curr = 0;
        if(k1!=0) curr++;
        if(k2!=0) curr++;
 
        for(int i = 3;i<=n;++i)
        {
            long long need = last + d;
            if(abs(need - b[i])>1)
            {
                curr = INF;
                break;
            }
            if(need != b[i])
                curr++;
 
            last = need;
        }
 
        res = min(res,curr);
    }
 
    if(res == INF) cout<<-1;
    else cout<<res;
    return 0;
}