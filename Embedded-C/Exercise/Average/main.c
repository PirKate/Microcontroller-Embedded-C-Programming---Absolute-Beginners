#include <stdio.h>

int main (void) {
	float n1, n2, n3;
	float avg;

	printf ("n1 = ");
	fflush(stdout);
	scanf("%f", &n1);
	printf("\nn2 = ");
	fflush(stdout);
	scanf("%f", &n2);
	printf("\nn3 = ");
	fflush(stdout);
	scanf("%f", &n3);

	avg = (n1 + n2 + n3)/3;
	printf("\navg = %f", avg);

	printf("\nPress enter to exit the application \n");

	while(getchar() != '\n') {

	}
	getchar();
}
