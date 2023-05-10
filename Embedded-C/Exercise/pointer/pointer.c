#include <stdio.h>

long long int g_data = 0xFFFEABCD11112345;

int main (void) {
	printf("g_data = %I64X\n\n", g_data);

	int *pAddress = (int *) &g_data;
	printf("pAddress = %p\n*pAddress = %x\n\n", pAddress,*pAddress);

	pAddress = pAddress + 1;
	printf("pAddress = %p\n*pAddress = %x\n\n", pAddress,*pAddress);

}
