/*		
	Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному слову на каждой строке.
	Ref:
	C Kerigan Richi 2001.pdf
	1.5.4. Подсчет слов
*/

#include <stdio.h>
#define IN  1 // внутри слова
#define OUT 0 // вне слова

main()
{
	int c, nl, nw, nc, state;
	int end = getchar();
	
	state = OUT; 
	nl = nw = nc = 0;

	while ((c = getchar()) != end)
	{
		++nc;
		
		if (c == '\n')
		{
			++nl;
		}
		if (c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
			putchar('\n');
		}
		else if (state == OUT) 
		{ 
			state = IN;
			++nw;
			putchar(c);
		}
		else 
		{
			putchar(c);
		}
	}	

	printf("%d %d %d\n", nl, nw, nc);	
}