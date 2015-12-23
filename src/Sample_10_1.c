/*		
	Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко рисовать горизонтальными полосами. Рисование вертикальными полосами - более трудная задача.
	Ref:
	C Kerigan Richi 2001.pdf
	1.6. Массивы
*/

#include <stdio.h>

main()
{
	int symbols['z' - 'a'];
	int c, i, j;
	
	int end = getchar();
	
	for (i = 0; i < 'z' - 'a'; ++i)
	{
		symbols[i] = 0;
	}	
	
	while ((c = getchar()) != end)
		if (c >= 'a' && c <= 'z' ) 
			++symbols[c - 'a']; 
		
	printf ("Symbols gistogram\n"); 
	
	for (i = 0; i < 'z' - 'a'; ++i)
	{	
		if(symbols[i] != 0)
		{
			printf("\n");
		}
		
		for (j = 0; j < symbols[i]; ++j)
		{
			printf("%c", i + 'a');
		}	
		
	}
}