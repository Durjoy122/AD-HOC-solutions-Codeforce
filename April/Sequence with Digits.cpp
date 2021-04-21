#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

void ans() {
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin() , v.end());
    int tot = 0 , tto = 0;
    for(int i = 0; i < n; i++) {
        tot++;
        if(v[i] <= tot) {
            tto++;
            tot = 0;
        }
    }
    cout << tto <<"\n";
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
