#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n , m;
        cin >> n >> m;
        if(n > m) {
            swap(n , m);
        }
        if(n == m) {
           cout <<"0\n";
           continue;
        }
        else {
           int dif = m - n , res = 0;
           for(int i = 1; ; i++) {
              if(res % 2 == dif % 2) {
                 if(res >= dif) {
                    cout << i - 1 <<"\n";
                    break;
                 }
              }
              res += i + 1;
           }
        }
    }
    return 0;
}
