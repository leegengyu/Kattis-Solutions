#include <stdio.h>
#include <stdlib.h>

int compare();

int main(void) {
	int i, days, max = 0, tree[100000];
	
	scanf("%d", &days);

	for(i = 0; i < days; i++)
		scanf("%d", &tree[i]);

	qsort(tree, days, sizeof(tree[0]), compare); // sizeof(*tree) correct too

	for(i = 0; i < days; i++)
		if(tree[i] + i + 2 > max)
			max = tree[i] + i + 2; // + 1 (array starts from 0) + 1 (at earliest on next day after last tree)

	printf("%d\n", max);

	return 0;
}

int compare(const void *a, const void *b) {
	return (*(int*)b - *(int*)a); // descending order
}