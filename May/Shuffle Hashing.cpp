#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) {
        string t , s;
        cin >> t >> s;
        if(t.size() > s.size()) {
            cout <<"NO\n";
            continue;
        }
        multiset<char> tt , st; /* insert just like a normal vector*/
        for(auto&it : t) {
           tt.insert(it);
        }
        for(int i = 0; i < t.size(); i++) {
            st.insert(s[i]);
        }
        for(auto&it : st) {
            cout << it;
        }
        exit(0);
        bool ok = false;
        for(int i = t.size(); i < s.size(); i++) {
           if(tt == st) {
              cout <<"YES\n";
              ok = true;
              break;
           }
           st.insert(s[i]);
           st.erase(st.find(s[i - t.size()]));
        }
        if(tt == st && !ok) {
            cout <<"YES\n";
            ok = true;
        }
        if(!ok) {
           cout <<"NO\n";
        }
    }
    return 0;
}
