#include <stdio.h>
#include "math.h"

int main(){
	printf("add : %d\n", math_add(0x0fff1111, 0x0fff1111));
	printf("mul : %I64X\n", math_mul(0x0fff1111, 0x0fff1111));
	printf("div : %f\n", math_div(0x0fff1111, 0x0fff1111));
	return 0;
}
