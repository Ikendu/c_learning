 #include <stdio.h>
 
 main()
 {
 	float celsius, fahr;
 	
 	printf("This is a Fahr to Celsius Conversion Table\n");
 	
 	int num = 1;
 	
 	//for loop with float
 	for (fahr = 0; fahr <= 300; fahr += 20)
 	{
 		celsius = (5.0/9.0) * (fahr - 32.0);
 		printf("%3d %7.0f %12.2f\n",num, fahr, celsius);
 		num += 1;
 		
 	}
 	/*
	int frh, celcius, add;
 	
 	frh = 0;
 	add = 1;
 	
 	for(frh = 0; frh <= 300; frh += 20){
 		celcius = 5 * (frh - 32) / 9;
 		printf("%3d %6d %10d\n", add, frh, celcius);
 		add += 1;
 	
 	}
 	
 	//the while loop
	
 		while(fahr <= 300)
	{
 		celcius = 5 * (fahr - 32) / 9;
 		printf("%d\t%d\n",frh, celsius);
 		frh = frh + 20;
 	} */
 }
