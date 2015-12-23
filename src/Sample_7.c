 /*
	подсчет вводимых символов; 1-я версия
		
	Ref:
	C Kerigan Richi 2001.pdf
	1.5.2. Подсчет символов 
*/

#include <stdio.h>

main ()
{
	long nc = 0;
	
	int end = getchar();
	

	while (getchar() != end) 
		++nc;

	printf("%ld\n", nc);
	
	
	double ncD;
	 	
	for (ncD = 0; getchar() != end; ++ncD);
		printf ("%.0f\n", ncD);
}
