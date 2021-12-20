#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    if(s.size() == 1) {
        cout << s <<"\n";
        cout << s;
        exit(0);
    }
    for(int i = 2; i < s.size(); i++) {
        cout << s[i];
    }
    cout <<s[0];
    cout <<s[1] <<"\n";
    cout << s[s.size() - 1];
    for(int i = 0; i < s.size() - 1; i++) {
        cout << s[i];
    }
    return 0;
}
