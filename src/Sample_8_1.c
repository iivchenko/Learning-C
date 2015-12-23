/*
	Упражнение 1.8. Напишите программу для подсчета пробелов, табуляций и новых строк.	
		
	Ref:
	C Kerigan Richi 2001.pdf
	1.5.3. Подсчет строк
*/

#include <stdio.h>

main()
{	
	int code;
	int end = getchar();
	int tabCount = 0, spaceCount = 0, newLineCounter = 0;
	
	while((code = getchar()) != end)
	{
		if (code == '\n')
		{
			++newLineCounter;			
		}
		
		if (code == ' ')
		{
			++spaceCount;			
		}
		
		if (code == '\t')
		{
			++tabCount;
		}		
	}
	
	printf("New lines: %d\n", newLineCounter);		
	printf("Spaces: %d\n", spaceCount);		
	printf("Tabs: %d\n", tabCount);
	
}