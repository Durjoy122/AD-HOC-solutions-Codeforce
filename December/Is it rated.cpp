#include<bits/stdc++.h>
using namespace std;

pair<int,int> v[1111];

void solve() {
    char s[1005];
    cin >> s;
    int n , t;
    cin >> n;
    t = strlen(s);
    if(n > t) {
        cout <<"impossible\n";
        exit(0);
    }
    set <char> st;
    for(int i = 0; i < t; i++) {
        st.insert(s[i]);
    }
    int tt = st.size();
    cout << max(0 , n - tt) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
