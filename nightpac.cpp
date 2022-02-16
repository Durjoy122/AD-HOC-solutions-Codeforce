#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    map <char , int> mp;
    int mx = 0;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        if(s[i] == '2') v.push_back(i);
        mp[s[i]]++;
        mx = max(mx , mp[s[i]]);
    }
    char c[n][n];
    for(int i = 0; i < n; i++) {
       for(int j = 0; j < n; j++) {
           if(i == j) c[i][j] = 'X';
           else c[i][j] = '=';
       }
    }
    if(mx == n) {
        if(s[0] == '1') {
            cout <<"YES\n";
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    cout << c[i][j];
                }
                cout <<"\n";
            }
            return;
        }
    }
    if(v.size() == 2 || v.size() == 1) cout <<"NO\n";
    else if(v.size()) {
        int tt = v.size();
        for(int i = 0; i < tt - 1; i++) {
             int cnt = 0;
             for(int j = i; j < tt - 1; j++) {
                  cnt++;
                  c[v[j]][v[j + 1]] = '+';
                  c[v[j + 1]][v[j]] = '-';
                  if(cnt == 1) break;
             }
        }
        c[v[tt - 1]][v[0]] = '+';
        c[v[0]][v[tt - 1]] = '-';
        cout <<"YES\n";
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) cout << c[i][j];
            cout <<"\n";
        }
        cout <<"\n";
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
