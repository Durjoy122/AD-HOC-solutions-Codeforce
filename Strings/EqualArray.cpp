#include<bits/stdc++.h>
using namespace std;

#define M 1000000
bool marked[M];
vector<long long>prime;
int cnt = 0;

int main() {
    /*marked[0] = marked[1] = false;
    for(int i = 2;i < M; i++){
       marked[i]=true;
    }
    for (int i = 2; i <= sqrt(M); i++) {
      if (marked[i] == true) { // i is a prime
          for (int j = i * i; j <= M; j += i) {
               marked[j] = false;
          }
       }
    }*/
    int n;
    cin >> n;
    int a = 1, b = 2;
    while(n-- && b <= 15) {
       if(__gcd(a, b) == 1) {
           cnt++;
           a++;
           b++;
       }
       else {
          b++;
       }
    }
    cout << cnt <<"\n";
    return 0;
}
