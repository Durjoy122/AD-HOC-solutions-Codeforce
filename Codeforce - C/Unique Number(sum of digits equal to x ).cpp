#include<bits/stdc++.h>
using namespace std;
#define ll long long

/*[💭] [💡] [🎈] */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = 0;
        if(n > 45) {
            cout <<"-1\n";
            continue;
        }
        else {
            string s;
            int now = 9;
            while(n) {
                int mn = min(n , now);
                s += '0'+ mn;
                n -= mn;
                now--;
            }
            reverse(s.begin() , s.end());
            cout << s <<"\n";
        }
    }
    return 0;
}
