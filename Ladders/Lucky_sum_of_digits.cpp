#include <bits/stdc++.h>

// ---------------------------template starts here-------------------------- 

#define int long long int
#define pb push_back
#define MAX INT_MAX
#define F first
#define S second 
#define mp make_pair
#define MIN INT_MIN
#define MOD 1000000007
#define FO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

set <int> s;
bool ar[100001];
void seive() {
    ar[0] = ar[1] = true;

    for(int p=2; p*p<=100001; p++) {
        if(ar[p] == false) {
            for(int i=p*p;i<=100001;i+=p)
                ar[i] = true ;
        }
    }

    for(int p=2;p<=100001;p++) {
        if(ar[p] == false)
            s.insert(p);
    }
}

bool is_palindrome(string str) {
    int len = str.length();
    for(int i=0;i<=len/2;i++) {
        if(str[i] != str[len-1-i])
            return false;
    }
    return true;
}

// --------------------------template ends here------------------------------

void solve() {
    int sum;
    cin >> sum;
    int a4, a7, flag = 0, ans = INT_MAX;
    for(int i=0;i<=7;i++) {
        int p1 = 4*i;
        if((sum - p1) >= 0 and (sum-p1) % 7 == 0) {
            a4 = i;
            a7 = (sum-p1)/7;
            ans = min(ans, a4+a7);
            flag = 1;
        }
    } 
    // cout << ans << endl;  
    if(ans == INT_MAX) {
        cout << "-1" << endl;
        return;
    }
    else {
        a7 = (sum - 4*ans)/3;
        a4 = ans - a7;
        for(int i=1;i<=a4;i++)
            cout << '4';
        for(int i=1;i<=a7;i++)
            cout << '7';
        cout << endl;
    }
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}