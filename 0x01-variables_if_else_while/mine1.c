#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n, "is positive");
	}		
	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");				
	}
	else
	{
		printf("%d is %s\n", n, "negative");
	}	
	return (0);

}
