#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int x) {
     // First x in the below expression is
     //bool isPowerOfTwo(int x)
     return x && (!(x & (x - 1))); // x == 4 true then power 2^2
                                   // x = 32  true then power 2^5
                                   // x = 7 the false
}

void XOR() {
    /* int a , b;
     cin >> a >> b;
     a ^= b;
     b ^= a;         <<-- swap two numbers -->
     a ^= b;
     cout << a <<" "<< b;
     */

    /* int n;
     cin >> n;
     vector <int> v(n);
     for(auto&it : v) {
        cin >> it; // 2 2 3 2 2 // 1st
                   // 4 4 5 4 4//  2nd
     }
     int res = 0;
     for(int i = 0; i < n; i++) {
         res ^= v[i];
     }
     cout << res <<"\n"; //1st -- 3//
                         // 2nd -- 5//
     */

}

void bitwiseAND() {
   /*int n;
    cin >> n;
    if(n & 1) {
        cout <<"odd\n"; // If n is an odd number then the condition would be odd.
    }
    else {
        cout <<"even\n";
    }*/
}

void leftShift() {
    /*int n;
     cin >> n;
     cout << (n << 1) <<"\n"//if n == 5 then (5 + 5) then output Would be 10.
     cout << (n << 2) <<"\n"; //if we increase the left-shift power 1 to 2 then it shows us 20//
    */
}

void rightShift() {
  /*int n;
    cin >> n;
    cout << (n >> 1) <<"\n";//if n == 10 then (10 / 2) then output Would be 5.//
    cout << (n >> 2) <<"\n";//if n == 10 then (10 / 2) == 5 then(5 / 2) == 2 . n divided by 2 in two times//
   */
}

void bitwiseNOT() {
  /*int n;
    cin >> n;
    cout << ~n <<"\n"; /*if n == 7 then the answer is -8 It always show us positive number to Negative.
                         if n == 5 then the answer is -6.
                         if n == 4 then the answer is -5.
  */
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    bitwiseAND();
    leftShift();
    rightShift();
    bitwiseNOT();
    XOR();
    return 0;
}
