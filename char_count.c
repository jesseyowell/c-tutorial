#include <stdio.h>

/* count characters in input; 2nd version */
/* using ctrl-z + fg shows the char count when suspended process is resumed */

int main() {
	
	double nc;

	for(nc = 0; getchar() != EOF; ++nc) 
		;
	  printf("%.0f\n", nc);
	

	return 0;
}