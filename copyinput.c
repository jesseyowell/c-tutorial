#include <stdio.h>

/* This copies current text stream and filters duplicate white spaces */
/* if any subsequent white spaces occur, let's ignore and print out valid characters only */
/* the ; provides a way to do nothing within the while loop, if subsequent whitespaces occur! */
/* Thanks to Stackoverflow for this one.. */

int main() {

	double c;

	while((c = getchar()) != EOF) {
      putchar(c);
        if(c == ' ') {
          while((c = getchar()) == ' ')
        ;
        putchar(c);  	
        }
      
	}
	return 0;
}