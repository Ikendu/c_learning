#include <stdio.h>

int main(void)
{
	int i;
	printf("Upper Hex          Lower Hex         Decimal\n");
	for (i = 0; i < 16; i++)
	{
	printf("%X                   %x                  %d\n", i, i, i);	
	}	
}

