#include <bits/stdc++.h>
using namespace std;

int value(int d1, int d2) {
  if ((d1 == 1 && d2 == 2) || (d1 == 2 && d2 == 1)) return 1000; // highest, higher than 66 = 600 below
  if (d1 == d2) return d1*100; // 66 = 600, 55 = 500, ..., 11 = 100
  if (d1 > d2) return d1*10+d2;
  else         return d2*10+d1;
}

int main() {
  int s0, s1, r0, r1, v1, v2;
  while (scanf("%d %d %d %d", &s0, &s1, &r0, &r1), (s0 || s1 || r0 || r1)) {
    v1 = value(s0, s1);
    v2 = value(r0, r1); // as we are going to compute the same thing twice, we better use a function here
         if (v1 > v2) printf("Player 1 wins.\n");
    else if (v1 < v2) printf("Player 2 wins.\n");
    else              printf("Tie.\n");
  }
  return 0;
}
