#include <iostream>
#include <string>
 
using namespace std;
 
int i, j, k, m, n;
 
string s, p[10];
 
int main() {
    
    cin >> s;
    for (i = 0; i < 10; i++) cin >> p[i];
 
    while (s.size() > 0) {
        for (j = 0; j < 10; j++) if (s.find(p[j]) == 0) break;
        cout << j;
        s = s.substr(10);
    }
 
    return 0;
}