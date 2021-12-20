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
        vector <int> v;
        for(int i = 0; i < n * 2; i++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool ok = false;
        for(int i = 0; i < v.size(); i = i + 2) {
            int ans = 0;
            ans = v[i] + v[i + 1];
            if(ans % 2 == 0) {
                ok = true;
                break;
            }
            else {
                continue;
            }
        }
        if(ok) {
            cout <<"No\n";
        }
        else {
            cout <<"Yes\n";
        }
    }
    return 0;
}

