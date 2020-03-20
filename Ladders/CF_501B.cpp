#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define MAX INT_MAX
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

struct Node {
    
    int data;
    struct Node *parent;
    int rank;
    int size;
    
};
 
struct Node *makeset(int val) {
    
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = val;
    temp->parent = temp;
    temp->rank = 0;
    temp->size = 1;
 
    return temp;
}
 
struct Node *findset(struct Node *temp) {
    
    if(temp->parent == temp)
    return temp;
    temp->parent = findset(temp->parent);
 
    return temp->parent;
    
}
 
struct Node *Union(struct Node *e1, struct Node *e2) {
    
    struct Node *f1 = findset(e1);
    struct Node *f2 = findset(e2);
 
    if(f1 == f2) {
        return f1;
    }
 
    if(f1->rank > f2->rank) {
        f2->parent = f1;
        f1->size += f2->size;
        return f1;
    }
 
    else {
        f1->parent = f2;
        f2->size += f1->size;
        if(f1->rank == f2->rank)
        f2->rank++;
    }
 
    return f2;
}

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    map <string, string> mp;
    for(int i=0;i<n;i++) {
        cin >> s1 >> s2;
        if(mp.find(s1) == mp.end())
            mp[s2] = s1;
        else {
            mp[s2] = mp[s1];
            mp.erase(s1);
        }
    }
    cout << mp.size() << endl;
    for(auto it = mp.begin(); it != mp.end(); ++it)
        cout << it->first << " " << it->second << endl;
    return;
}
int32_t main() {
    FO;
    solve();
    return 0;
}