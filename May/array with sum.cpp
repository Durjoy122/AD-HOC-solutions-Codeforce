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
        int temp = 0 , cnt = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] & 1) {
                cnt++;
            }
            else {
               temp++;
            }
        }
        if(cnt & 1 || (temp && cnt)) {
            cout <<"YES\n";
        }
        else {
            cout <<"NO\n";
        }
    }
    return 0;
}

