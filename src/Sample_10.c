/*		
	Ref:
	C Kerigan Richi 2001.pdf
	1.6. Массивы
*/

#include <stdio.h>

main()
{
	int c, nwhite, nother;
	int digits[10];
	int i;
	
	int end = getchar();
	
	nwhite = nother = 0; 
	
	for (i = 0; i < 10; ++i)
	{
		digits[i] = 0;
	}	
	
	while ((c = getchar()) != end)
		if (c >= '0' && c <= '9' ) 
			++digits[c - '0' ]; 
		else if (c == ' ' || c == '\n' || c == '\t') 
			++nwhite; 
		else ++nother;
		
	printf ("Digits ="); 
	
	for (i = 0; i < 10; ++i)
		printf(" %d", digits[i]);

	printf(", separators = %d, others = %d\n", nwhite, nother);
}