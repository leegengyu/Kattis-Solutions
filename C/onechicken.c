#include <stdio.h>

int main(void) {
	int people, chicken;
	
	scanf("%d %d", &people, &chicken);
	
	if(people - chicken > 1)
		printf("Dr. Chaz needs %d more pieces of chicken!\n", people - chicken);
	else if(people - chicken == 1)
		printf("Dr. Chaz needs 1 more piece of chicken!\n");
	else if(chicken - people > 1)
		printf("Dr. Chaz will have %d pieces of chicken left over!\n", chicken - people);
	else
		printf("Dr. Chaz will have 1 piece of chicken left over!\n");
	
	return 0;
}