#include <stdio.h>

void print_one(int *ptr, int rows);
int main()
{
	int one[] = {0, 1, 2, 3, 4}; // 크기가 5인 배열 초기화

	printf("one = %p\n", one); // 배열의 주소 출력
	printf("&one = %p\n", &one); // 배열의 주소 출력
	printf("&one[0] = %p\n", &one[0]); // 배열의 첫 번째 요소 출력
	printf("\n");
	printf("------------------------------------\n");
	printf(" print_one(&one[0], 5) \n");
	printf("------------------------------------\n");
	print_one(&one[0], 5); // 배열의 첫 번째 요소의 주소와 크기를 매개변수로 함수 호출
	printf("------------------------------------\n");
	printf(" print_one(one, 5) \n");
	printf("------------------------------------\n");
	print_one(one, 5); // 배열의 주소와 크기를 매개변수로 함수 호출

	return 0;
}

void print_one(int *ptr, int rows)
	{/* print out a one-dimensional array using a pointer */
		// 매열의 포인터를 사용하여 배열의 요소들을 출력하는 함수 정의
		int i;
		printf ("Address \t Contents\n");
		for (i = 0; i < rows; i++)
			printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 포인터와 포인터가 가리키는 값 출력
		printf("\n");
}
