#include<bits/stdc++.h>
using namespace std;

int n , m , k , t;
vector <int> v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    k = n / 2 , t = 0;
    v.resize(n);
    for(auto&it : v) {
       cin >> it;
    }
    sort(v.begin() , v.end());
    bool ok = true;
    while(t <= k) {
        int x = (t + k) >> 1;
        for(int i = 0; i < x; i++) {
            if(v[n - x + i] - v[i] < m) {
                ok = false;
                break;
            }
        }
        if(ok) {
            t = x + 1;
        }
        else {
            k = x - 1;
        }
    }
    cout << k <<"\n";
    return 0;
}
