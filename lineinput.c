#include <stdio.h>

/* count lines in input */
/* using ctrl-z + fg shows the char count when suspended process is resumed */
/* tb: tab, nl: newline, bs: blankspace */

int main() {
	int c;
	double tb,nl,bs;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			++tb;
		if (c == '\n')
			++nl;
		if (c == ' ')
			++bs;
	}
   printf("%.0f %.0f %.0f\n", tb,nl,bs);
}