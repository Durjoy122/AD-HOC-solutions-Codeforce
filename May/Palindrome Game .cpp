#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*[💭] [💡] [🎈] */

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
        int ans = 0;
        map <int , int> mp;
        for(int i = 0; i < n; i++) {
            ans += mp[v[i]] * (n - i);
            mp[v[i]] += i + 1;
        }
        cout << ans <<"\n";
    }
    return 0;
}
