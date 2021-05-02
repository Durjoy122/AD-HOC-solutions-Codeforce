#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

void ans() {
   int n , m;
   cin >> n >> m;
   int v[n];
   for(int i = 1; i <= n; i++) {
      cin >> v[i];
   }
   int ans = 0;
   for(int i = 1; i <= m; i++) {
      for(int j = 1; j <= n; j++) {
          if(v[j] > 0) {
             v[j]--;
             v[n]++;
             break;
          }
      }
   }
   for(int i = 1; i <= n; i++) {
       cout << v[i] <<" ";
   }
   cout <<"\n";
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
