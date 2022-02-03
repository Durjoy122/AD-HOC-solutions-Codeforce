#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        char c;
        cin >> c;
        getline(cin , s);
        s = c + s;
        string tmp;
        vector <string> v;
        for(auto u : s) {
           if(isspace(u)) { // if any space's are in the string
              v.push_back(tmp);
              tmp.clear();
           }
           else {
              tmp += u;
           }
        }
        v.push_back(tmp);
        map<string , int> mp;
        int mx = 0;
        for(auto u : v) {
            mp[u]++;
            mx = max(mx , mp[u]);
        }
        string ans;
        for(auto it : v) {
            if(mp[it] == mx) {
                ans = it;
                break;
            }
        }
        cout << ans <<" "<< mx <<"\n";
    }
    return 0;
}
