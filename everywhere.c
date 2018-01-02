typedef struct {
	char cityName[21];
} city_t;

typedef struct {
	city_t city[101];
} trip_t;

#include <stdio.h>
#include <string.h>

int main(void) {
	int i, j, k, num, cities, count[51] = {0};
	trip_t trips[101];
	
	scanf("%d", &num);
	
	for(i = 0; i < num; i++) {
		scanf("%d", &cities);
		for(j = 0; j < cities; j++) {
			k = j;
			scanf("%s", trips[i].city[j].cityName);
			count[i]++;
			
			while(k > 0)
				if(strcmp(trips[i].city[j].cityName, trips[i].city[--k].cityName) == 0) {
					count[i]--;
					break;
				}
		}
	}
	
	for(i = 0; i < num; i++)
		printf("%d\n", count[i]);
	
	return 0;
}