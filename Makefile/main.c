#include <stdio.h>
#include "sum.h"

int main(int argc, char **argv){
	
	int x;
	x= sum(1, 2);
	
#ifdef DEBUG
	printf("x = %d \n", x);
#endif

	return 1;
}
