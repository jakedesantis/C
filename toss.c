#include <stdio.h>
#include "toss.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
	{
	/* this is how we assign a string*/
	char m[] = "Hello, world.";
	int z = add_two(1,2);
	printf("%s\n", m);
	printf("%i\n", z);
	printf("TMT on Mauna Kea\n");

	int *p;
	int v = 5;
	p = &v;
	printf("v is %d\n", v);
	printf("*p is %d\n", *p);
	/*printf("&v is %d\n", &v);*/
	/*int toss;*/
	/*scanf("%d\n",&toss );*/
	sleep(5);
	return(0);
	}
