#include <stdio.h>

#define LOWER  0
#define UPPER  300
#define STEP  20

main()
{
	int fahr;
	int num = 1;
	
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
	
		printf("%3d %6d %12.1f\n", num, fahr, (5.0/9.0) * (fahr - 32));
		num++;
	
}
