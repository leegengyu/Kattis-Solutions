#include <cstdio>

int main() {
	int t, ng, nm, temp;
	
	scanf("%d", &t);
	
	while(t--) {
		int g = 0, m = 0;
		scanf("%d %d", &ng, &nm);
		
		while(ng--) {
			scanf("%d", &temp);
			if(temp > g)
				g = temp;
		}
		
		while(nm--) {
			scanf("%d", &temp);
			if(temp > m)
				m = temp;
		}
		
		if(m > g)
			printf("MechaGodzilla\n");
		else
			printf("Godzilla\n");
	}
}