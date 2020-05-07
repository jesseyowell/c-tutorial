#include <stdio.h>

/* Simple input to output copier */
/* Replaces tabs with '\t', blank space with '\s', and backslash with '\\' */
/* Backslash requires double slash (\\) in getchar then quadruple slash (\\\\) to be printed */

int main() {
    int c;

	while ((c = getchar()) != EOF) {
		if(c == '\t') {
			while((c = getchar()) == '\t')
			;	
		  printf("\\t");
	    }
	    if(c == ' ') {
	    	while((c = getchar()) == ' ')
	    	;
	      printf("\\b");
	    }
	    if(c == '\\') {
	    	while((c = getchar()) == '\\')
	        ;
	      printf("\\\\");  		
	    }
		putchar(c);
	}
	return 0;
}