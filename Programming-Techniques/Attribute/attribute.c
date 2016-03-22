#include <stdio.h>


struct Normal_t
{
	char cdata; //4
	int idata; //4
	float fdata; //4
};// 12

struct Aligned_t
{
	char cdata;
	int idata;
	float fdata;
}__attribute__ ((aligned (8))); // 12 == align 8 ==> 16



struct Packed_t
{
	char cdata; //1
	int idata; //4
	float fdata; //4
}__attribute__((packed));// == minimum ==> 9



int main(int argc, char **argv)
{
	printf("sizeof(char): %d\n", (int)sizeof(char));
	printf("sizeof(int): %d\n", (int)sizeof(int));
	printf("sizeof(float): %d\n", (int)sizeof(float));
	printf("sizeof(long): %d\n", (int)sizeof(long));
	printf("\n\n");



	struct Normal_t m1;
	struct Aligned_t m2;
	struct Packed_t m3;

	printf("sizeof(Normal_t): %d\n", (int)sizeof(m1));
	printf("sizeof(Aligned_t): %d\n", (int)sizeof(m2));
	printf("sizeof(Packed_t): %d\n", (int)sizeof(m3));

	return 0;
}	
