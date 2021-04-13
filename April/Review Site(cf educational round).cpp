#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

int call(int x) {
   int t = 0;
   while(x) {
      t++;
      x /= 10;
   }
   return t;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int a , b , c;
        cin >> a >> b >> c;
        int x = 1 , y = 1;
        while(call(x) < a) {
            cout << x <<" ";
            x*= 2;
        }
        while(call(y) < c) {
            y*= 2;
        }
        while(call(y) < b) {
            y*= 3;
        }
        cout << x <<" "<< y <<"\n";
     }
     return 0;
}
