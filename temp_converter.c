#include <stdio.h>

#define LOWER	-32
#define UPPER   40
#define STEP	10

 int main() {

 int celsius;

  for(celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP) {
  	printf("%3d %6.1f\n", celsius, (celsius * (9.0/5.0) + 32));
  }
  		return 0;
 }