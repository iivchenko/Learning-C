/*
	печать таблицы температур по Фаренгейту и Цельсию
		
	Ref:
	C Kerigan Richi 2001.pdf
	1.4. Именованные константы
*/

#include <stdio.h> 
#define LOWER 0 /* нижняя граница таблицы */ 
#define UPPER 300 /* верхняя граница */ 
#define STEP 20 /* размер шага */


main () 
{
	int fahr;
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) 
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
