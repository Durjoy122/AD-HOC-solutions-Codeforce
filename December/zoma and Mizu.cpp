#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0 , cnt1 = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            cnt1++;
        }
        else {
            cnt++;
        }
    }
    cout << cnt + cnt1+ 1 <<"\n";
    return 0;
}

