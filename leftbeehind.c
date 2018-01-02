#include <stdio.h>

int main(void) {
	int sweet, sour;
	
	while(1) {
		scanf("%d %d", &sweet, &sour);
		
		if(sweet == 0 && sour == 0)
			break;
		if(sweet + sour == 13)
			printf("Never speak again.\n");
		else if(sweet > sour)
			printf("To the convention.\n");
		else if(sour > sweet)
			printf("Left beehind.\n");
		else
			printf("Undecided.\n");
	}
	return 0;
}