#include <cstdio>
#include <vector>
using namespace std;

int main(void) {
	int i, j, k, n, ht, temp, step, set_num;
	vector<int> v;

	scanf("%d", &n);

	while(n--) {
		scanf("%d", &set_num);
		k = 20;
		step = 0;
		v.clear();

		while(k--) {
			scanf("%d", &ht);
			v.push_back(ht);
		}

		for(i = 1; i < 20; i++) { // Insertion Sort
			j = i;
			
			while(j > 0 && v[j - 1] > v[j]) {
				swap(v[j], v[j - 1]);
				j--;
				step++;
			}
		}

		printf("%d %d\n", set_num, step);
	}

	return 0;
}