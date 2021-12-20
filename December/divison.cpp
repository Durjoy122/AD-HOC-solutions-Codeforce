#include<bits/stdc++.h>
using namespace std;
#define maxn 5210

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
         int n , m;
         cin >> n >> m;
         int v[n][m];
         for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
         }
         int c = 0 , b = 0;
         for(int i = 0; i < n; i++) {
            int temp = 0;
            for(int j = 0; j < m; j++) {
                temp += v[i][j];
            }
            if(temp == 0) {
                c++;
            }
         }
         for(int i = 0; i < n; i++) {
            int b = 0;
            for(int j = 0; j < n; j++) {
                tot += v[j][i];
            }
            if(tot == 0) {
                b++;
            }
         }
         int ans = min(c , b);
         if(ans % 2 == 0) {
             cout <<"Vivek\n";
         }
         else {
             cout <<"Ashish\n";
         }
    }
    return 0;
}

