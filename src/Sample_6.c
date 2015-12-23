 /*
	копирование ввода на вывод; 1-я версия 
		
	Ref:
	C Kerigan Richi 2001.pdf
	1.5. Ввод-вывод символов
*/

#include <stdio.h>

main() 
{	
	int c;
	c = getchar(); 
			
	while (c != EOF) 
	{
		putchar(c);
		c = getchar();
	}
	
	while ((c = getchar()) != EOF)
		putchar(c);
	
	printf("\n\nEOF:%d", EOF);
}
