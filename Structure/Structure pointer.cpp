#include<bits/stdc++.h>
using namespace std;

typedef struct person {
   int age;
   float weight;
};

int main() {
   struct person *personPtr , person1;

   /* int *n , t;
      n = &t;
   */
   //inputpart

   personPtr = &person1;
   cin >>(*personPtr).age;
   cin >>(*personPtr).weight;

   // Printpart
   cout << (*personPtr).age <<" "<< (*personPtr).weight;
   return 0;
}
