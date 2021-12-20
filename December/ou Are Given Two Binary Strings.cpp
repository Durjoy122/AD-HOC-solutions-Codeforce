#include<bits/stdc++.h>
using namespace std;

#define ll  long long
const int N = 2e5 + 10;

void solve() {
    string t , s;
    cin >> s >> t;
    reverse(t.begin() , t.end());
    reverse(s.begin() , s.end());
    int i = 0 , j = 0;
    while(j < t.size() && t[j] == '0') {
        j++;
    }
    while(i < s.size() && (i < j || s[i] == '0')) {
        i++;
    }
    cout << i - j <<"\n";
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   int t;
   cin >> t;
   while(t--) {
     solve();
   }
   return 0;
}
