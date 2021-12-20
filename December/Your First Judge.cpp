#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.length();
    bool ok = false;
    char k = s[0];
    if(isupper(k)) {
        ok = true;
    }
    for(int i = 0; i < n; i++) {
        if(s[i] == ',') {
            if(islower(s[i + 1])) {
                ok = false;
                break;
            }
        }
    }
    if(ok) {
        cout <<"Ac\n";
    }
    else {
        cout <<"WA\n";
    }
    return 0;
}
