#include <stdio.h>

typedef struct {
	int course;
	char name[31], study[11], dob[11];
} case_t;

int main(void) {
	int i, cases, eligibility;
	case_t student[1000];
	
	if(scanf("%d", &cases))
		for(i = 0; i < cases; i++)
			if(scanf("%s %s %s %d", student[i].name, student[i].study, student[i].dob, &student[i].course))
				continue;

	for(i = 0; i < cases; i++) {
		eligibility = 0;
		
		if(student[i].study[0] >= '2' && student[i].study[1] >= '0' &&
			student[i].study[2] >= '1' && student[i].study[3] >= '0')
			eligibility = 1;
		
		if(student[i].dob[0] == '1'	&& student[i].dob[1] == '9' &&
		student[i].dob[2] == '9' && student[i].dob[3] >= '1')
			eligibility = 1;
			
		if(student[i].dob[0] >= '2' && student[i].dob[1] >= '0' &&
		student[i].dob[2] >= '0' && student[i].dob[3] >= '0')
			eligibility = 1;

		if(eligibility)
			printf("%s eligible\n", student[i].name);
		else if(student[i].course >= 41)
			printf("%s ineligible\n", student[i].name);
		else
			printf("%s coach petitions\n", student[i].name);
	}

	return 0;
}