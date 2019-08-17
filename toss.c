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

	int n = 50, *ptr;
	ptr = &n;
	printf("n is %d.\n", n);
	printf("the address of n is %x.\n", &n);
	printf("ptr is %x\n",ptr);
	printf("the thing ptr points to is %d.\n", *ptr);





	sleep(5);
	return(0);
	}
