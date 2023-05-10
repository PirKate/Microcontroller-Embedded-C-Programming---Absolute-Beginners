#include <stdio.h>
#include <stdint.h>

void wait_for_input();

int main (void) {

	float a, b;

	printf("COMPARE TWO NUMBERS\n--------\na = ");

	if( scanf("%f", &a) == 0 ) {
		printf("--------\ninvalid input, Exiting...\n");
		wait_for_input();
		return 0;
	}

	printf("b = ");
	if( scanf("%f", &b) == 0 ) {
		printf("--------\ninvalid input, Exiting...\n");
		wait_for_input();
		return 0;
	}

	int a1 = a, b1 = b;

	if ( (a1 != a) || (b1 != b) ) printf("warning! comparing only integer parts\n");

	if ( a1 > b1 ) printf ("--------\na > b\n");
	else if (a1 == b1) printf ("--------\na = b\n");
	else printf ("--------\na < b\n");
	wait_for_input();
}

void wait_for_input() {
	fflush(stdout);

	printf("Press enter to exit this application");

	while(getchar() != '\n'){}

	getchar();

}
