#include<stdio.h>
using namespace std;

void solve() {
   long long a , b;
   scanf("%lld %lld" , &a , &b);
   for(long long i = a; i <= b; i++) {
      for(long long j = i + 1; i <= b; j++) {
        for(long long k = j + 1; k <= b; k++) {
            if(__gcd(i , j) == 1 && __gcd(j , k) == 1 && __gcd(a , k) != 1) {
                printf("%lld %lld %lld\n" , i , j , k);
                return;
            }
         }
      }
   }
   puts("-1");
}

int main() {
    solve();
    return 0;
}
