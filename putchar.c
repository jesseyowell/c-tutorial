#include <stdio.h>


/* Let's get characters as long there is no EOF (newlines don't count as EOF) */
/* We're going to output the values via putchar(), and also print EOF's value and the expression we created to evaluate if c does not equal EOF! */

int main() {

	int c;

	while ((c = getchar()) != EOF) {
		printf("%d\n",EOF);
		printf("%d\n",(c = getchar()) != EOF);
		putchar(c);
	}

	return 0;
}