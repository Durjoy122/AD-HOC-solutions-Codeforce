#include<bits/stdc++.h>
using namespace std;
#define maxn 5210

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n == 1 || n == 2) {
            if(s[0] >= s[1]) {
                cout <<"NO\n";
            }
            else if (n == 1) {
                cout <<"NO\n";
            }
        }
        else {
           cout <<"YES\n";
           cout <<"2\n";
           cout << s[0] <<" ";
           for(int i = 1; i <s.size(); i++) {
               cout << s[i];
           }
           cout <<"\n";
        }
    }
    return 0;
}
