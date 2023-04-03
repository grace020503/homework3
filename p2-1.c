#include <stdio.h>
#define MAX_SIZE 100

float sum1(float list[], int); // 함수 프로토타입 선언
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer; // 전역 변수 선언
int i;

void main(void)
{

	for(i=0; i < MAX_SIZE; i++)
	input[i] = i; // input 배열 초기화

	/* for checking call by reference */
	printf("--------------------------------------\n");
	printf(" sum1(input, MAX_SIZE) \n");
	printf("--------------------------------------\n");
	printf("input \t= %p\n", input);
	answer = sum1(input, MAX_SIZE);
	printf("The sum is: %f\n\n", answer); //sum1 함수 호출

	printf("--------------------------------------\n");
	printf(" sum2(input, MAX_SIZE) \n");
	printf("--------------------------------------\n");
	printf("input \t= %p\n", input);
        answer = sum2(input, MAX_SIZE);
	printf("The sum is: %f\n\n", answer); // sum2 함수 호출
	
	printf("--------------------------------------\n");
	printf(" sum3(MAX_SIZE, input) \n");
	printf("--------------------------------------\n");
	printf("input \t= %p\n", input);
	answer = sum3(MAX_SIZE, input);
	printf("The sum is: %f\n\n", answer); // sum3 함수 호출

}

float sum1(float list[], int n) // 배열을 받아서 모든 요소의 합을 구하는 함수
{
	printf("list\t= %p\n", list);
	printf("&list\t= %p\n\n", &list);

	int i;
	float tempsum = 0;
	for(i = 0;i < n;i++)
		tempsum += list[i];
	return tempsum;
}

float sum2(float *list, int n) // 포인터를 이용하여 배열의 모든 요소의 합을 구하는 함수
{
	printf("list\t= %p\n", list);
	printf("&list\t= %p\n\n", &list);

	int i;
	float tempsum = 0;
	for(i = 0;i < n;i++)
		tempsum += *(list + i);
	return tempsum;
}

/* stack variable reuse test */
float sum3(int n, float *list) // 배열의 크기와 포인터를 받아서 모든 요소의 합을 구하는 함수
{
	printf("list\t= %p\n", list);
	printf("&list\t= %p\n\n", &list);

	int i;
	float tempsum = 0;
	for(i = 0;i < n;i++)
		tempsum += *(list +i);
	return tempsum;
}
