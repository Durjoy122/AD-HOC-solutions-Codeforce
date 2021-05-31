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
        vector <int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int sum = 0 , tot = 0;
        multiset<int> st;
        for(int i = 0; i < n; i++) {
            if(v[i] >= 0) {
                tot++;
                sum += v[i];
                continue;
            }
            v[i] *= -1;
            if(sum >= v[i]) {
                sum -= v[i];
                tot++;
                st.insert(v[i]);
                continue;
            }
            if(st.size() && *st.rbegin() > v[i]) {
                sum += *st.begin();
                sum -= v[i];
                st.erase(prev(st.end()));
                st.insert(v[i]);
            }
        }
        cout << tot <<"\n";
     }
     return 0;
}
