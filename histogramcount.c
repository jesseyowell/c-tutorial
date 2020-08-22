#include <stdio.h>

#define IN 	1
#define OUT 0

/* count words entered */

int main() {
	int c, i, j, state, count;
	int nchar[10];
	count = 0;
	state = IN;

	for(i = 0; i < 10; ++i) {
		nchar[i] = 0;
	}

	while ((c = getchar()) != EOF) {
       
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
		  ++count;
		}   
	    else if(c == ' ' || c == '\n' || c == '\t' || c == '\r') {
		  ++nchar[count];
		  state = OUT;
		  count = 0; // this resets the char count, for the next word
		}
		else state = IN;
	}  
       printf("word size = ");
	      
	    for(j = 1; j < 10; ++j) {
	      printf("%d", nchar[j]);  // prints out ten digits that will correspond to the size of each word entered. (004) = 4 3-letter words,
	                               // we add 1 to j so we don't print out 0 char words
	    }
		putchar('\n');

		return 0;		
}