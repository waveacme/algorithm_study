#include <stdio.h>

void bubblesort(int s[], int n)
{
	int i, j;
	int tmp;
	for (i=n; i>0; i--) {
		for (j=0; j<i-1; j++) {
			if (s[j]>s[j+1]) {
				tmp = s[j+1];
				s[j+1] = s[j];
				s[j] = tmp;
			}
		}
	}
}

int main(void)
{
	int s[10] = {3, 2, 5, 9, 12, 6, 1, 8, 7, 4};
	int i;

	for (i=0; i<10; i++)
		printf("%d ", s[i]);

	printf("\n");

	bubblesort(s, 10);

	for (i=0; i<10; i++)
		printf("%d ", s[i]);

	printf("\n");

	return 0;
}
