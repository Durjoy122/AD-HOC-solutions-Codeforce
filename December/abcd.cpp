#include<bits/stdc++.h>
using namespace std;

void solve() {
   int n;
   scanf("%d", &n);
   int v[n];
   long long sum  = 0;
   for(int i = 0; i < n; i++) {
      scanf("%d", &v[i]);
      sum += v[i];
   }
   int val = sum / n;
   int val2 = sum - val * n;
   int val3 = n - val2;
   long long ans = 1LL * val3 * val2;
   printf("%lld\n" , ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
      solve();
    }
    return 0;
}
