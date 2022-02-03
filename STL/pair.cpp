#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n , m;
    cin >> n >> m;
    vector <int> a(n) , b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    vector< pair <int,int> > v;
    for(int i = 0; i < n; i++) {
        v.push_back( make_pair(a[i] , b[i]));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        if(v[i].first > m) {
            break;
        }
        else {
            m += v[i].second;
        }
    }
    cout << m <<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}
