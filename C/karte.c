#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, k, greska = 0, arr[4] = {13, 13, 13, 13};
	char temp[4], str[160];
	
	scanf("%s", str);
	
	for(i = 0; greska != 1 && i < strlen(str) - 3; i += 3) {
		k = 0;
		temp[k] = str[i];
		temp[k+1] = str[i+1];
		temp[k+2] = str[i+2];
		for(j = i + 3; j < strlen(str); j += 3)
			if((temp[k] == str[j]) && (temp[k+1] == str[j+1]) && (temp[k+2] == str[j+2])) {
				printf("GRESKA\n");
				greska = 1;
				break;
			}
	}

	if(!greska) {
		for(i = 0; i < strlen(str); i += 3) {
			if(str[i] == 'P')
				arr[0]--;
			if(str[i] == 'K')
				arr[1]--;
			if(str[i] == 'H')
				arr[2]--;
			if(str[i] == 'T')
				arr[3]--;
		}
	
		for(i = 0; i < 4; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}

	return 0;
}