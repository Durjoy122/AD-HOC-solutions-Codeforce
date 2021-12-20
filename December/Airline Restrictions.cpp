#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int a , b, c , d , e;
        cin >> a >> b >> c >> d >> e;
        vector <int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin() , v.end());
        if(v[0] + v[1] <= d and v[2] <= e) {
            cout <<"YES\n";
            continue;
        }
        if(v[0] + v[2] <= d and v[1] <= e) {
            cout <<"YES\n";
            continue;
        }
        if(v[1] + v[2] <= d and v[0] <= e) {
            cout <<"YES\n";
            continue;
        }
        if(v[1] + v[0] <= d and v[2] <= e) {
            cout <<"YES\n";
            continue;
        }
        else {
            cout <<"NO\n";
        }
    }
    return 0;
}
