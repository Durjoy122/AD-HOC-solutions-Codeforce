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
        string s;
        cin >> s;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'U') {
                cout <<"D";
            }
            else if(s[i] == 'D') {
                cout <<"U";
            }
            else {
                cout << s[i];
            }
        }
        cout <<"\n";
    }
    return 0;
}
