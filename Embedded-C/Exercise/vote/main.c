#include <stdio.h>
#include <stdint.h>

int main (void) {
	int32_t age;

	printf("Enter your age: ");

	fflush(stdout);
	scanf("%i",&age);

	if (age < 18) printf("\nYou can't vote\n");
	else printf("\nYou can vote\n");

	printf("\nPress enter to exit the application \n");
	while(getchar() != '\n') {

	}
	getchar();
}
