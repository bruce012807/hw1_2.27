#include<stdio.h>
#include<stdlib.h>
main() {
	int a, b, c;
	for ( b = 1; b <= 5; b++) {
		for ( c = 5; c>b; c = c - 1)
		{
			printf(" ");
		}
		for ( a = 1; a <= (b * 2 - 1); a++)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
}