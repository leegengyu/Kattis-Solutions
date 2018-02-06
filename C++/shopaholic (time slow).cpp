#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main(void) {
	int i, n, p;
	long long sum = 0;
	vector<int> v;
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%d", &p);
		v.push_back(p);
	}
	
	sort(v.begin(), v.end(), cmp);
	
	for(p = 2; p < v.size(); p += 3)
		sum += v[p];
	
	printf("%lld\n", sum);
	
	return 0;
}