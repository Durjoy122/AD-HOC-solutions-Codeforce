#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*[💭] [💡] [🎈] */

void ans() {
   int n;
   cin >> n;
   vector<vector<int> > a(n);
   for(int i = 0; i < n; i++) {
      int x;
      cin >> x;
      x--;
      a[x].push_back(i);
   }
   vector <int> ans(n + 1 , -1);
   for(int i = 0; i < n; i++) {
       if(a[i].empty()) {
          continue;
       }
       int mx = max(a[i][0] + 1, n - a[i].back());
       for(int j = 0; j < a[i].size(); j++) {
          mx = max(mx , a[i][j] - a[i][j - 1]);
       }
       if(ans[mx] == -1) {
         ans[mx] = i;
       }
   }
   for(int i = 2; i <= n; i++) {
      if(ans[i - 1] != -1) {
         if(ans[i] == -1) {
            ans[i] = ans[i - 1];
         }
         else {
            ans[i] = min(ans[i] , ans[i - 1]);
         }
      }
   }
   for(int i = 1; i <=n; i++) {
      if(ans[i] == -1) {
         cout <<"-1"<<" ";
      }
      else {
         cout << ans[i] + 1 <<" ";
      }
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

