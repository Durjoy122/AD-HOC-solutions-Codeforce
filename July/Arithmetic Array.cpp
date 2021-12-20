#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string t , s;
        cin >> s >> t;
        int n , m;
        n = s.size() , m = t.size();
        int x = n * m / __gcd(n , m);
        bool ok = false;
        for(int i = 0; i < x; i++) {
            if(s[i % n] != t[i % m]) {
               ok = true;
               break;
            }
        }
        if(ok) {
            cout <<"-1\n";
        }
        else {
          for(int i = 0; i < x; i++) {
             cout << s[i % n];
          }
          cout <<"\n";
        }
    }
    return 0;
}

