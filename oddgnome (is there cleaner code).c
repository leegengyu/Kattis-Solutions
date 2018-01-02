#include <stdio.h>

int main(void) {
	int i, j, num, found, firstrun, gnomeid, gnometot, previd;
	
	scanf("%d", &num);
	
	for(i = 1; i <= num; i++) {
		scanf("%d", &gnometot);
		firstrun = 0;
		found = 0;
		for(j = 1; j <= gnometot; j++) {
			scanf("%d", &gnomeid);
			
			if(found == 1)
				continue;
			
			if((gnomeid != (previd + 1)) && (firstrun == 1)) {
				printf("%d\n", j);
				found = 1;
			}
			
			previd = gnomeid;
			firstrun = 1;
		}
	}
	return 0;
}