#include<bits/stdc++.h>
using namespace std;
#define ll long long

deque<int> Q;
int v[100005] , x[100005] , z[100005];

 int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        Q.push_back(a);
    }
    for(int i = 1; i <= n; i++) {
        v[i] = Q.front();
        Q.pop_front();
        x[i] = Q.front();
        Q.pop_front();
        Q.push_front(max(v[i] , x[i]));
        Q.push_back(min(v[i] , x[i]));
    }
    for(int i = 1; i <= n; i++) {
        z[i] = Q.front();
        Q.pop_front();
    }
    while(m--) {
        ll tt;
        cin >> tt;
        if(tt <= n) {
            cout << v[tt] <<" "<< x[tt] <<"\n";
        }
        else {
            ll l = (tt - n - 1);
            ll o = (n - 1);
            cout << z[1] <<" "<< z[l % o + 2] <<"\n";
        }
    }
    return 0;
}
