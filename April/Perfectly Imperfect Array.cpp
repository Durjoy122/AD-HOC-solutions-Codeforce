#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

void ans() {
    int n;
    cin >> n;
    int v[n];
    bool ok = false;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        int t = sqrt(v[i]);
        if(t * t != v[i]) {
            ok = true;
        }
        else {
            continue;
        }
    }
    if(ok) {
        cout <<"YES\n";
    }
    else {
        cout <<"NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
      ans();
    }
    return 0;
}
