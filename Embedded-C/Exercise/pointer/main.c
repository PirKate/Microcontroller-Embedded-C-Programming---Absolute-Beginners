#include <stdio.h>

int main () {

	char a = 100;

	printf("address of -a- is %p\n", &a);

	char* p_a =  &a;

	printf("address of -a- is %p\n", p_a);

	char a_address = *p_a;

	printf("value of -a- is %d\n", a_address);

	*p_a = 65;

	printf("address of -a- is %d\n", a);

	return 0;
}
