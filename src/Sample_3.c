#include <stdio.h>
/*
	печать таблицы температур по Фаренгейту 
	и Цельсию для fahr = 0, 20, ..., 300 
	
	Ref:
	C Kerigan Richi 2001.pdf
	1.3. Инструкция for
*/
main()
{
	int fahr;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20) 
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	
	printf("\n\n");
	
	for (fahr = 300; fahr >= 0; fahr = fahr - 20) 
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));	
}