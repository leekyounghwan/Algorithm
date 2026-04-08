#include<stdio.h>

int main()
{
	int i = 5;
	printf("i=%d\n", i);
	printf("Address of i=%d\n", &i);
	printf("Address of i=%p\n", &i);
	printf("i의 시작주소=%X\n", &i);
	int     *pi = 0;//아직은 아무데도 가리키지 마라
	pi = &i;
	printf("pi=%p\n", pi);
	printf("*pi=%d\n", *pi);
	int k = 7;
	int* pk = &k;
	printf("*pk=%d\n", *pk);
	*pk = *pi; // k = 5;
	printf("final k =%d\n", k);

	int**     p2i = &pi;
	printf("pi의 시작주소=%p\n", &pi);
	printf("p2i가 저장한주소=%p\n", p2i);
	printf("*p2i가 가리키는 공간안에있는 주소=%p\n",
										*p2i);
	printf("**p2i가 가리키는 공간안에있는 주소=%d\n",
										**p2i);

	int***  p3i = &p2i;
	printf("p2i의 시작주소=%p\n", &p2i);
	printf("p3i가 저장하고 있는 주소=%p\n", p3i);
	printf("***p3i가 가리키는 공간안에있는 값=%d\n",
									***p3i);

	return 0;
}