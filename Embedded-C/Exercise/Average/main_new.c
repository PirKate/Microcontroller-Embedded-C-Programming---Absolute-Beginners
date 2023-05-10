#include <stdio.h>

int main (void) {
	double n1, n2, n3;
	double avg;

	printf ("enter 3 numbers: ");
	fflush(stdout);
	scanf("%lf %lf %lf", &n1, &n2, &n3);


	avg = (n1 + n2 + n3)/3;
	printf("\navg = %lf", avg);

	printf("\nPress enter to exit the application \n");

	while(getchar() != '\n') {

	}
	getchar();
}
