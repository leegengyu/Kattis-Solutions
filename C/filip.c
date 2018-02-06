#include <stdio.h>

int main(void) {
	char num1[4], num2[4];
	
	scanf("%s %s", num1, num2);
	
	if((num1[2] > num2[2]) || (num1[2] == num2[2] && num1[1] > num2[1]) ||
	   (num1[2] == num2[2] && num1[1] == num2[1] && num1[0] > num2[0]))
		printf("%c%c%c\n", num1[2], num1[1], num1[0]);
 
	else
		printf("%c%c%c\n", num2[2], num2[1], num2[0]);
	
	return 0;
}