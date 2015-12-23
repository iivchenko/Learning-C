/*
	Упражнение 1.9. Напишите программу, копирующую символы ввода в выходной поток и заменяющую стоящие подряд пробелы на один пробел.
		
	Ref:
	C Kerigan Richi 2001.pdf
	1.5.3. Подсчет строк
*/

#include <stdio.h>
#define YES 1
#define NO 0

main()
{
	int code;
	int secondSpace = NO;
	int end;

	printf("Enter END symbol: ");
	end	= getchar();
	
	while((code = getchar()) != end)
	{
		if (code != ' ')
		{
			putchar(code);
			secondSpace = NO;
		}
		
		if (code == ' ')
		{
			if (secondSpace == NO)
			{
				putchar(code);				
			}
			
			secondSpace = YES;			
		}
	}	
}