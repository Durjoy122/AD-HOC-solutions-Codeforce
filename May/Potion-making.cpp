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
        vector <int> v;
        v.resize(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            v[i]--;
        }
        int ans = 0;
        if(is_sorted(v.begin() , v.end())) {
            cout <<"0\n";
            continue;
        }
        else {
            if(v[0] == 0 || v[n - 1] == n - 1) {
                cout <<"1\n";
            }
            else {
                if(v[0] == n - 1 && v[n - 1] == 0) {
                    cout <<"3\n";
                }
                else {
                    cout <<"2\n";
                }
            }
        }
    }
    return 0;
}
