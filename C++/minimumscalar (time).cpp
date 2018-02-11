#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int i, j, n, t, temp;
	long long sum;
	vector<long long> v1, v2;
	
	scanf("%d", &t);
	
	for(i = 1; i <= t; i++) {
		scanf("%d", &n);
		sum = 0;
		v1.clear();
		v2.clear();
		
		for(j = 0; j < n; j++) {
			scanf("%d", &temp);
			v1.push_back(temp);
		}
		
		for(j = 0; j < n; j++) {
			scanf("%d", &temp);
			v2.push_back(temp);
		}
		
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		
		for(j = 0; j < n; j++)
			sum += (v1[j] * v2[n - j - 1]);
		
		printf("Case #%d: %lld\n", i, sum);
	}
}