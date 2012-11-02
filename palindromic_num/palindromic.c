#include <stdio.h>
#include <stdlib.h>

int is_palin_num(int num)
{
	int reverse = 0;
	int orig = num;

	while(num) {
		reverse = reverse * 10 + num % 10;
		num /= 10;
	}
	return (reverse==orig);
}

int main(int argc, char **argv)
{
	if(argc!=2) {
		printf("arg invalid!\n");	
		return 0;
	}
	int num = atoi(argv[1]);
	is_palin_num(num);
	return 0;
}
