#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int A, B, C, I, J, K;
	double lo = 500;
	
	cin >> A >> B >> C >> I >> J >> K;

	lo = min((double)A / I, lo);
	lo = min((double)B / J, lo);
	lo = min((double)C / K, lo);
	
	// fixed not required here
	cout << setprecision(6) << A - (I * lo) << " " << B - (J * lo) << " " << C - (K * lo) << '\n';
}