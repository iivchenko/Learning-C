/*
	подсчет вводимых символов; 1-я версия
		
	Ref:
	C Kerigan Richi 2001.pdf
	1.5.3. Подсчет строк
*/

#include <stdio.h>

main()
{
	int code;
	int end = getchar();
	int newLineCounter = 0;
	
	while((code = getchar()) != end)
	{
		if (code == '\n')
		{
			++newLineCounter;			
		}
		
		printf("%d\n", newLineCounter);		
	}	
}