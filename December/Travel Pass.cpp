#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n , a , b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int st = 0 , dt  = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0'){
                dt++;
            }
            else {
                st++;
            }
        }
        int ans = (dt * a) + (st * b);
        cout << ans <<"\n";
    }
    return 0;
}
