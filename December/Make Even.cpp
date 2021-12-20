#include<bits/stdc++.h>
using namespace std;

#define ll  long long

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    stringstream con(s);
    int x = 0;
    con >> x;
    if(x % 2 == 0) {
        cout <<"0\n";
    }
    else {
        int cnt = 0 , loc = 0 , temp = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] & 1) {
                cnt++;
            }
            else {
                if(temp == 0) {
                    temp++;
                    loc = i;
                }
            }
        }
        swap(s[0] , s[loc]);
        reverse(s.begin() , s.end());
        stringstream ton(s);
        int nn = 0;
        ton >> nn;
        if(cnt == n || nn % 2 != 0) {
            cout <<"-1\n";
        }
        else {
            cout << loc + 1 <<"\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
       solve();
    }
    return 0;
}
