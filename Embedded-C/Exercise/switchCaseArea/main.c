#include <stdio.h>
#include <stdint.h>

void wait_for_input();

int main (void) {
	float r, b, h, a;
	float area = 0;
	char code;

	printf("AREA CALCULATOR\n\n-------------------\n");
	printf("SHAPE     | CODE  |\n----------|-------|\n");
	printf("Circle    |   c   |\n----------|-------|\n");
	printf("Triangle  |   t   |\n----------|-------|\n");
	printf("Rectangle |   r   |\n----------|-------|\n");
	printf("Square    |   s   |\n----------|-------|\n");
	printf("Trapezoid |   z   |\n----------|-------|\n");
	printf("\nEnter code here: ");
	scanf("%c", &code);

	switch (code) {

	case 'c':
		printf("Circle area calculation\nEnter the radius: ");
		if (scanf("%f", &r) == 0) printf("INVALID INPUT: enter a valid number\n");
		else if (r <= 0) printf("INVALID INPUT: radius an't be negative\n");
		else area = r * r * 3.14;
		break;

	case 't':
		printf("Triangle area calculation\nEnter the base: ");
		if( scanf("%f", &b) == 0) printf("INVALID INPUT: enter a valid number\n");
		else if (b <= 0) printf("INVALID INPUT: base can't be negative\n");
		else {
			printf("Enter the height: ");
			if (scanf("%f", &h) == 0) printf("INVALID INPUT: enter a valid number\n");
			else if ((h <= 0)) printf("INVALID INPUT: height can't be negative\n");
			else area = b * h / 2;
		}
		break;

	case 'r':
		printf("Rectangle area calculation\nEnter the length: ");

		if( scanf("%f", &a) == 0) printf("INVALID INPUT: enter a valid number\n");
		else if (a <= 0) printf("INVALID INPUT: length can't be negative\n");
		else {
			printf("Enter the height: ");
			if (scanf("%f", &b) == 0) printf("INVALID INPUT: enter a valid number\n");
			else if ((b <= 0)) printf("INVALID INPUT: height can't be negative\n");
			else area = b * a;
		}
		break;

	case 's':
		printf("Square area calculation\nEnter the length: ");
		if (scanf("%f", &a) == 0) printf("INVALID INPUT: enter a valid number\n");
		else if (a <= 0) printf("INVALID INPUT: length can't be negative\n");
		else area = a * a;
		break;

	case 'z':
		printf("Trapezoid area calculation\nEnter the base: ");

		if( scanf("%f", &b) == 0) printf("INVALID INPUT: enter a valid number\n");
		else if (b <= 0) printf("INVALID INPUT: base can't be negative\n");
		else {
			printf("Enter the height: ");
			if (scanf("%f", &h) == 0) printf("INVALID INPUT: enter a valid number\n");
			else if ((h <= 0)) printf("INVALID INPUT: height can't be negative\n");
			else {
				printf("Enter the other base: ");
				if (scanf("%f", &a) == 0) printf("INVALID INPUT: enter a valid number\n");
				else if (a <= 0) printf("INVALID INPUT: base can't be negative\n");
				else area = (a + b) / 2 * h;
			}
		}
		break;
	default:
		printf("ERROR: NO SUCH CODE\n");

	}

	if (area > 0) {
		printf("Area = %f\n", area);
	}
	wait_for_input();

}


void wait_for_input() {
	fflush(stdout);

	printf("Press enter to exit this application");

	while(getchar() != '\n'){}

	getchar();

}
