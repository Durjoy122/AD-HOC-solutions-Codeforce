#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        auto it = unique(s.begin() , s.end());
        s.erase(it , s.end());
        vector <int> v;
        for(int i = 0; i < s.size(); i++) {
            v.push_back(s[i] - '0');
        }
        sort(v.begin() , v.end());
        bool ok = true;
        for(int i = 1; i < v.size(); i++) {
            if(v[i] == v[i - 1]) {
                ok = false;
                break;
            }
            else {
               continue;
            }
        }
        if(n == 1) {
            cout <<"YES\n";
        }
        else if(ok) {
            cout <<"YES\n";
        }
        else {
            cout <<"NO\n";
        }
    }
    return 0;
}
