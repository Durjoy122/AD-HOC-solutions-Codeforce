#include<bits/stdc++.h>
using namespace std;

void rec(int a , int b , int *n, int *x) {
      if(a == *n) {
         *n = b;
          return;
      }
      if(x[a] % 2 == 0) {
          x[b++] = x[a];
      }
      rec(a + 1 , b , n , x);
}

int main(){
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    rec(0 , 0 , &n , ar);
    for(int i = 0; i < n; i++) {
        cout << ar[i] <<" ";
    }

}
