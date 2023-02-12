#include <stdio.h>
main()
{
	int fahr;
	
	int num = 1;
	
	for(fahr = 300; fahr != 0; fahr -= 20)
	{
		printf("%3d %6d %12.2f\n", num, fahr, (5.0/9.0) * (fahr - 32));
		num += 1;
	}
}
