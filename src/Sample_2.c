/*
	печать таблицы температур по Фаренгейту 
	и Цельсию для fahr = 0, 20, ..., 300 
	
	Ref:
	C Kerigan Richi 2001.pdf
	1.2. Переменные и арифметические выражения
*/

#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0; 		/* нижняя граница таблицы температур */ 
	upper = 300;  /* верхняя граница */
	step = 20; 		/* шаг */
	fahr = lower; 
	
	printf("This is INTEGER conversation of F to C\n\n");
	
	while (fahr <= upper) 
	{
		celsius = 5 * (fahr-32) / 9;
		printf ("%d\t%d\n", fahr, celsius); 
		fahr = fahr + step; 
	}
	
	printf("\n\nThis is FLOAT conversation of F to C\n");
	
	float celsiusF;
	float fahrF = lower;
	
	while (fahrF <= upper) 
	{
		celsiusF = (5.0/9.0) * (fahrF-32.0);
		printf ("%3.0f\t%6.1f\n", fahrF, celsiusF); 
		fahrF = fahrF + step; 
	}
	
	printf("\n\nThis is FLOAT conversation of C to F\n");
	
	celsiusF = lower;
	fahrF;
	
	while (celsiusF <= upper) 
	{		
		fahrF = (celsiusF / (5.0/9.0)) + 32.0;
		printf ("%f\t%f\n", celsiusF, fahrF); 
		celsiusF = celsiusF + step;
	}
}