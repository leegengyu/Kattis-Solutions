// Zamka
#include <bits/stdc++.h>
using namespace std;

int sum_of_digit(int the_number) { // there are other ways, this is just one of the way
  int digit_sum = 0;
  while (the_number) {
    digit_sum += the_number%10;
    the_number /= 10;
  }
  return digit_sum;
}

int main() {
  // freopen("in.txt", "r", stdin);
  // read L, D, X
  int L, D, X;
  cin >> L >> D >> X;
  // find min N, such that L <= N <= D, and sum_of_digit(N) == X
  int N;
  for (N = L; N <= D; N++)
    if (sum_of_digit(N) == X) {
      cout << N << endl;
      break;
    }
  // find max M, such that L <= M <= D, and sum_of_digit(M) == X
  int M;
  for (M = D; M >= L; M--)
    if (sum_of_digit(M) == X) {
      cout << M << endl;
      break;
    }
  return 0;
}
