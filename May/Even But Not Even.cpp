#include<bits/stdc++.h>
using namespace std;

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    bool ok = false;
    while(t--) {
        int n;
        cin >> n;
        string s , t ="";
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++) {
          int tot = s[i] - '0'; // Store integer Number
           if(tot & 1) {
              cnt++;
              t += s[i];
              if(cnt == 2) {
                break;
              }
          }
       }
       if(cnt != 2) {
          cout <<"-1\n";
       }
       else {
          cout << t <<"\n";
       }
    }
    return 0;
}
