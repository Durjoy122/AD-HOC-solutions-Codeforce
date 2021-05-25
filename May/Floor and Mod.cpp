#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    set <string> sa;
    vector <string> st;
    string c;
    for(int i = 0; i < n; i++) {
        string s , t;
        cin >> s;
        t = s;
        reverse(t.begin() , t.end());
        if(t == s) {
           c = s;
        }
        else if(sa.count(t)) {
            sa.erase(t);
            st.push_back(s);
            st.push_back(t);
        }
        else {
            sa.insert(s);
        }
    }
    for(int i = 0; i < st.size(); i++) {
        if(i % 2 == 0) {
            c = st[i] + c;
        }
        else {
            c += st[i];
        }
    }
    cout << c.size() <<"\n";
    cout << c <<"\n";
    return 0;
}
