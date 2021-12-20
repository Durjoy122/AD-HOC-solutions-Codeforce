#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
       int n;
       cin >> n;
       int v[n] , B[n];
       sizeof(B , 0 , sizeof(n));
       for(int i = 0; i < n; i++) {
           cin >> v[i];
           B[i] = (v[i] + i);
       }
       int sum = 0;
       for(int i = 0; i < n; i++) {
          sum += (B[i] % 2);
       }
       cout << sum <<"\n";
    }
    return 0;
}

