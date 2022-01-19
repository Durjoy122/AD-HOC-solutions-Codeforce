#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector <char> c;

bool isPalindrome(string k) {
    for(int i = 0 , j = k.size()-1; i < k.size()/2 && j >= k.size()/ 2; i++ , j--){
        if(k[i] == k[j])
            continue;
        else{
            return false;
        }
    }
    return true;
}

string rev(string s) {
   reverse(s.begin() , s.end());
   return s;
}

void solve() {
    int a , b;
    cin >> a >> b;
    vector <string> s;
    map<string , int> mp;
    multiset<string> tst;
    for(int i = 1; i <= a; i++) {
       string st;
       cin >> st;
       string k = rev(st);
       auto it = tst.find(k);
       /*for(int i = 0; i < st.size() / 2; i++) {
           if(s[i] == s[st.size() - 1]) {
               c.push_back(s[i]);
           }
           else {
              continue;
           }
       }*/
       sort(st.begin() , st.end());
       mp[st]++;
       s.push_back(st);
    }
    int ans = 0;
    for(auto&it : mp) {
       ans = max(ans , it.second);
    }
    if(ans < 2) {
        cout <<"0\n";
    }
    else {
       sort(s.begin() , s.end());
       int cnt = 0;
       for(int i = 1; i < s.size(); i++) {
           if(s[i] == s[i - 1]) {
              cnt++;
           }
           else {
              continue;
           }
       }
       int res = b;
       res *= cnt + cnt;
       cout << res <<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
