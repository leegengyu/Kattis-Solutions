#include <cstdio>

int main() {
	int n, course;
	char name[31], study[11], dob[11];
	
	scanf("%d", &n);
	
	while(n--) {
		scanf("%s %s %s %d", name, study, dob, &course);
		printf("%s ", name);
		
		int studies = (study[0] - '0') * 1000 + (study[1] - '0') * 100 + (study[2] - '0') * 10 + (study[3] - '0');
		int birth = (dob[0] - '0') * 1000 + (dob[1] - '0') * 100 + (dob[2] - '0') * 10 + (dob[3] - '0');
		
		if(studies >= 2010 || birth >= 1991)
			printf("eligible\n");
		else if(course < 41)
			printf("coach petitions\n");
		else
			printf("ineligible\n");
	}
}