#include <stdio.h>

main()
{
	int c, nw, n1, nc, state;
	
	nw = n1 = nw = nc = state = 0;
	
	while((c = getchar()) != EOF)
	{
		++nc;
		if (c == "\n")
		{
			++n1;
		}
		if(c == ' ' || c == "\n" || c == "\t")
		{
			state = 1;
			++nw;
		}
	}
	printf("%d %d %d/n", n1, nw, nc);
}
