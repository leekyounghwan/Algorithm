#include<stdio.h>

int main()
{
	int i = 0;
	int sale[4] = { 10,20, 30,40 };
	int other[4] = { 0, };
	//other = sale;//other배열변수가 가진 
	//주소는 상수화되어 수정 불가

	for (i = 0; i < 4; i++)
	{
		printf("\n address:%u sale[%d]=%d",
					  &sale[i], i, sale[i]);
	}
	printf("\n");

	int num[2][4] = { {10,20,30,40},
					  {50,60,70,80 } };
	int* ptr = num ;
	//int*  ptr = &num[0][0] ;
	printf("num[0][1]=%d\n", num[0][1]);
	printf("*(ptr+1)=%d\n", *(ptr + 1));
	printf("num[1][3]=%d\n", num[1][3]);
	printf("*(ptr+7)=%d\n", *(ptr + 7));

	printf("num[0][0]의 주소=%p\n", &num[0][0]);
	printf("ptr이 저장한 주소=%p\n", ptr);
	printf("ptr+0 이 의미하는 주소=%p\n", ptr+0);
	printf("*(ptr+0)이 가리키는 값=%d\n", *(ptr + 0));
	printf("ptr이 가리키는 값=%d\n", *ptr);

	return 0;
}