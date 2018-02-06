typedef struct {
	int status;
	char name[21];
} person_t;

#include <stdio.h>
#include <string.h>

int main(void) {
	int i, num, found, namenum = 0;
	char status[6], name[21];
	person_t list[1000];

	scanf("%d", &num);

	for(i = 0; i < 1000; i++) // Initialisation
		list[i].status = 0;

	while(num--) {
		scanf("%s %s", status, name);
		found = 0;

		for(i = 0; i < namenum; i++)
			if(strcmp(list[i].name, name) == 0) {
				found = 1;
				break;
			}

		if(!found) { // if name appears for first time
			strcpy(list[i].name, name);
			namenum++;
		}

		if(status[1] == 'n') { // entry
			if(found) { // record exists
				if(list[i].status)
					printf("%s entered (ANOMALY)\n", list[i].name);
				else {
					printf("%s entered\n", list[i].name);
					list[i].status = 1;
				}
			}
			else { // no previous record
				printf("%s entered\n", list[i].name);
				list[i].status = 1;
			}
		}

		else { // exit
			if(found) { // record exists
				if(list[i].status) {
					printf("%s exited\n", list[i].name);
					list[i].status = 0;
				}
				else
					printf("%s exited (ANOMALY)\n", list[i].name);
			}
			else // no previous record
				printf("%s exited (ANOMALY)\n", list[i].name);
		}
	}

	return 0;
}