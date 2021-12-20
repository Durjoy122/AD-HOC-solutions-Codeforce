#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    scanf("%d" , &n);
    long long v[n];
    for(long long i = 1; i <= n; i++) {
        scanf("%lld" , &v[i]);
    }
    long long l[n] , k[n];
    memset(l , 0 , sizeof(n));
    memset(k , 0 , sizeof(n));
    for(int i = 1; i <= n; i++) {
        k[v[i]] = i;
        l[v[i]] = n - i + 1;
    }
    int m;
    scanf("%d" , &m);
    long long ans = 0 , ans2 = 0;
    for(int i = 0; i < m; i++) {
        int x;
        scanf("%d" , &x);
        ans += k[x];
        ans2 += l[x];
    }
    printf("%lld %lld\n", ans , ans2);
}

int main() {
    solve();
    return 0;
}
