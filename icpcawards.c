typedef struct {
	char uniName[21];
	char teamName[21];
} team_t;

#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, numTeam, repeat, count = 0;
	team_t team[201], results[12];
	
	scanf("%d", &numTeam);

	for(i = 0; i < numTeam; i++) {
		scanf("%s %s", team[i].uniName, team[i].teamName);
		j = i;
		repeat = 0;
		
		while(j > 0)
			if(strcmp(team[i].uniName, team[--j].uniName) == 0) {
				repeat = 1;
				break;
			}
			
		if(!repeat) {
			strcpy(results[count].uniName, team[i].uniName);
			strcpy(results[count++].teamName, team[i].teamName);
		}
	}
	
	for(i = 0; i < 12; i++)
		printf("%s %s\n", results[i].uniName, results[i].teamName);
	
	return 0;
}