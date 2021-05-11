#include<bits/stdc++.h>
using namespace std;

struct student {
   char name[50];
   int roll;
};

void display(struct student stu){
   cout << stu.name <<'\n';
   cout << stu.roll <<'\n';
}

int main() {
   struct student st;
   cin >> st.name;
   cin >> st.roll;
   display(st);
   return 0;
}
