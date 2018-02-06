#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, n, x, ma, mi, caseNo = 1;
  while (scanf("%d", &n) != EOF) {
    ma = -1e9;
    mi = 1e9;
    for (i = 0; i < n; i++) {
      scanf("%d", &x);
      // ma = max(ma, x);
      if (x > ma) ma = x;
      mi = min(mi, x);
    }
    printf("Case %d: %d %d %d\n", caseNo++, mi, ma, ma-mi);
  }
  return 0;
}



/*
// various other permutations of valid answers

#include <bits/stdc++.h>
using namespace std;

int main() {
  int i, n, value, maxv, minv, A[35], caseNo = 1;
  while (scanf("%d", &n) != EOF) {
    // computation on the fly version
    // maxv = -1e9;
    // minv = 1e9;
    // for (i = 0; i < n; i++) {
    //   scanf("%d", &value);
    //   maxv = max(maxv, value);
    //   minv = min(minv, value);
    // }
    // -------------------------------------------------
    // array version: read in the array A, of n elements
    for (i = 0; i < n; i++) scanf("%d", &A[i]); // O(n)
    // maxv = A[0];
    // for (i = 1; i < n; i++)
    //   if (A[i] > maxv)
    //     maxv = A[i];
    maxv = *max_element(A, A+n); // O(n)
    // minv = A[0];
    // for (i = 1; i < n; i++)
    //   if (A[i] < minv)
    //     minv = A[i];
    minv = *min_element(A, A+n); // O(n)
    printf("Case %d: %d %d %d\n", caseNo++, minv, maxv, maxv-minv); // total = O(3n+1) ~> O(n)
  }
  return 0;
}
*/
