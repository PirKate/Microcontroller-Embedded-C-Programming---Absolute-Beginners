#include <stdio.h>

int main (void) {

	printf("enter 6 characters of your choice: ");
	fflush(stdout);

	char q[6];
	int cnt = 0;

	printf("ASCII codes: ");

	while (cnt < 6) {
		q[cnt] = getchar();
		cnt = cnt + 1;
	}

	printf("%i, %i, %i, %i, %i, %i\n", q[0],q[1],q[2],q[3],q[4],q[5]);
	printf("press enter to exit the app \n");

	while(getchar() != '\n'){

	}
	getchar();

}
