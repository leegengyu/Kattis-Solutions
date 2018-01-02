typedef struct {
	char type[50]; // estimated
	int pax;
} animals_t;

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
	int i, j, k, num, len, numtypes, notpresent, limit, nospace, list = 1;
	char name[50], extract[50]; // estimated
	animals_t animal[1001], temp;
	
	while(1) {
		scanf("%d", &num);

		if(num == 0)
			break;

		// initialising structure variable pax
		for(i = 0; i < 1001; i++)
			animal[i].pax = 0;
		
		numtypes = 0;
		for(i = 0; i <= num; i++) {
			// wiping str extract clean.
			for(j = 0; j < 50; j++)
				extract[j] = '\0';
			
			fgets(name, 50, stdin);
			len = strlen(name);
			if(name[len - 1] == '\n')
				name[len - 1] = '\0';
			len = strlen(name);
			
			// conversion of name to all lowercase
			for(j = 0; name[j] != '\0'; j++)
				name[j] = tolower(name[j]);
			
			nospace = 1;
			for(j = 0; name[j] != '\0'; j++)
				if(name[j] == ' ')
					nospace = 0;
			
			if(nospace)
				strcpy(extract, name);
			
			// copy animal type out to temp str
			else 
				while(len--)
					if(name[len] == ' ') {
						k = 0;
						for(j = len + 1; name[j] != '\0'; j++)
							extract[k++] = name[j];
						break;
					}
			
			// check if animal type is currently present
			notpresent = 1;
			for(j = 0; j < numtypes; j++) {
				if(strcmp(extract, animal[j].type) == 0) {
					animal[j].pax++; // make sure original variable is init.
					notpresent = 0;
				}
			}
			
			if(notpresent) {
				strcpy(animal[numtypes].type, extract);
				animal[j].pax++; // make sure original variable is init
				numtypes++;
			}
		}
		printf("List %d:\n", list);
		list++;
		
		for(limit = numtypes - 2; limit >= 0; limit--)
			for(j = 0; j <= limit; j++)
				if(strcmp(animal[j].type, animal[j+1].type) > 0) {
					temp = animal[j];
					animal[j] = animal[j+1];
					animal[j+1] = temp;
				}
		
		for(j = 1; j < numtypes; j++) // why does j get occupied?????????????
			printf("%s | %d\n", animal[j].type, animal[j].pax);
	}
	return 0;
}