#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, r;
  scanf("%d %d", &l, &r);
       if (l+r == 0) printf("Not a moose\n");
  else if (l == r)   printf("Even %d\n", l+r);
  else               printf("Odd %d\n", 2*max(l, r)); // check C++ STL algorithm reference for the explanation about built-in function max: http://en.cppreference.com/w/cpp/algorithm/max
  return 0;
}
