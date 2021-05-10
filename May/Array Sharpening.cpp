#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    bool ok = false;
    while(t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for(auto&it : v) {
           cin >> it;
        }
        int tot = -1;
        for(int i = 0; i < n; i++) {
            if(v[i] < i) {
               tot = i;
               break;
            }
        }
        tot--;
        if(tot == -2) {
           cout <<"Yes\n";
           continue;
        }
        int pre = v[tot];
        for(int i = tot + 1; i < n; i++) {
            v[i] = min(v[i] , pre - 1);
            pre = v[i];
        }
        if(pre >= 0) {
           cout <<"Yes\n";
           continue;
        }
        cout <<"No\n";
    }
    return 0;
}
