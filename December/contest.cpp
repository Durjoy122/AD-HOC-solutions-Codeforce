#include<bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     int n;
     cin >> n;
     int temp = 0;
     while(n--) {
        string s;
        cin >> s;
        if(s[0] == '+' && s[1] == '+' || s[2] == '+' && s[1] == '+') {
            temp++;
        }
        else if(s[0] == '-' && s[1] == '-' || s[2] == '-' && s[1] == '-') {
            temp--;
        }
     }
     cout << temp <<"\n";
     return 0;
}
