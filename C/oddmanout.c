#include <stdio.h>

int main(void) {
	int i, j, k, num, guest, tempid, paircount, newcat, guestcount, guestid[500], guestidcount[500];
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &guest); // input num of guests in total
		
		guestcount = 0;
		for(j = 0; j < guest; j++) {
			scanf("%d", &tempid);
			
			for(k = 0; k < guestcount; k++)
				if(guestid[k] == tempid) {
					guestidcount[k]++;
					break;
				}
				
			if(guestcount == k) {
				guestid[k] = tempid;
				guestidcount[k] = 1;
				guestcount++;
			}
		}
		
		for(k = 0; k < guestcount; k++) 
			if(guestidcount[k] == 1)
				printf("Case #%d: %d\n", i+1, guestid[k]);
	}
	return 0;
}