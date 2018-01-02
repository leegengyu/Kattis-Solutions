#include <stdio.h>

int main(void) {
	int cup = 1;
	char way;
	
	while(scanf(" %c", &way) != EOF) {
		if(cup == 1) {
			if(way == 'A')
				cup = 2;
			if(way == 'C')
				cup = 3;
		}
		else if(cup == 2) {
			if(way == 'A')
				cup = 1;
			if(way == 'B')
				cup = 3;
		}
		else {
			if(way == 'B')
				cup = 2;
			if(way == 'C')
				cup = 1;
		}
	}
	
	printf("%d\n", cup);
	
	return 0;
}