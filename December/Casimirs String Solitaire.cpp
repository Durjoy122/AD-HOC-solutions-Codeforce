#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        if(n & 1) {
            cout <<"NO\n";
            continue;
        }
        else {
            int A = 0 , B = 0 , C = 0;
            for(int i = 0; i < n; i++) {
                if(s[i] == 'A') {
                    A++;
                }
                else if(s[i] == 'B') {
                    B++;
                }
                else {
                    C++;
                }
            }
            if(B && A && C) {
                if(A > B) {
                    cout <<"NO\n";
                }
                else if(C > B) {
                    cout <<"NO\n";
                }
                else if(A + C > B) {
                  cout <<"NO\n";
                }
                else {
                    cout <<"YES\n";
                }
            }
            else if(A == 0 && C == 0 && B == 0 || A == 0 && B == 0 || A == 0 && C == 0 || B == 0 && C == 0) {
                cout <<"NO\n";
            }
            else if(A == 0 || B && C) {
                if(B > C) {
                    cout <<"NO\n";
                }
                else if(C > B) {
                    cout <<"NO\n";
                }
                else {
                    cout <<"YES\n";
                }
            }
            else if(C == 0 || B && A) {
                if(B > A) {
                    cout <<"NO\n";
                }
                else if(A > B) {
                    cout <<"NO\n";
                }
                else {
                    cout <<"YES\n";
                }
            }
            else {
                cout <<"NO\n";
            }
        }
    }
    return 0;
}
