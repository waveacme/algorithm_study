#include <stdio.h>

void shell_sort(int v[], int size)
{
	int tmp;
	int gap, i, j;
	for (gap = size/2; gap > 0; gap /= 2)
		for (i = gap; i < size; ++i)
			for (j = i-gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
				tmp=v[j];
				v[j]=v[j+gap];
				v[j+gap]=tmp;
			}
}

int main()
{
	int i;
	int s[10] = {5,2,16,0,21,7,13,9,4,1};
	
	for (i=0; i<10; i++)
		printf("%d ", s[i]);

	printf("\n");

	shell_sort(s, 10);

	for (i=0; i<10; i++)
		printf("%d ", s[i]);

	printf("\n");
	return 0;
}
