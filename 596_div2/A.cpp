#include <bits/stdc++.h>
using namespace std;
int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int a, b;
        cin >> a >> b;
        if (a==b) printf("%d0\n%d1\n",a,b);
	else if (a+1==b) printf("%d9\n%d0\n",a,b);
	else if (a==9&&b==1) printf("99\n100\n");
	else printf("-1\n");
        return 0;
}
