#include <stdio.h>

main()
{
	int ch, ch1;
	
	printf("Enter a character from the keyboard\n");
	ch = getchar();
	ch1 = getc(stdin);
	printf("The character entered is: %c\n", ch);
	printf("The second character  is: %c\n", ch1);
	return 0;
}
