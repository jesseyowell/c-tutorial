#include <stdio.h>

#define IN 	1
#define OUT 0

/* copy input words and return them on each subsequent line */

int main() {
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {	
	        state = OUT;               
	    }
		else if (state == OUT) {
			state = IN;
			putchar('\n');
		}
		putchar(c);
	}
	return 0;
}