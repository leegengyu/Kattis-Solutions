#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int check(vector<int> v, int m) {
	int i, diff = v[0] - v[1];
	
	for(i = 1; i < m - 1; i++)
		if(v[i] - v[i + 1] != diff)
			return 0;

	return 1;
}

int main(void) {
    int i, n, m, temp;
    vector<int> v;
    
	scanf("%d", &n);
    
    while(n--) {
		scanf("%d", &m);
        v.clear();
        
		for(i = 0; i < m; i++) {
			scanf("%d", &temp);
            v.push_back(temp);
        }
        
		if(check(v, m))
			printf("arithmetic\n");
		else {
			sort(v.begin(), v.end());
			
			if(check(v, m))
				printf("permuted arithmetic\n");
			else
				printf("non-arithmetic\n");
		}
    }
    
    return 0;
}