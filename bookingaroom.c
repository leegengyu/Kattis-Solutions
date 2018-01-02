#include <stdio.h>

int main(void) {
	int i, temp, capacity, booked, room[101] = {0};
	
	scanf("%d %d", &capacity, &booked);
	
	for(i = 0; i < booked; i++) {
		scanf("%d", &temp);
		room[temp - 1] = 1;
	}
	
	if(capacity == booked) {
		printf("too late\n");
		return 0;
	}
	
	for(i = 0; i < capacity; i++) {
		if(room[i] == 0) {
			printf("%d", i+1);
			break;
		}
	}
	
	return 0;
}