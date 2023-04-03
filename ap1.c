#include <stdio.h>
#include <stdlib.h>

void main()
{
	char *name = "Kim sieun";
	char *id = "2021053007";

	int list[5]; //int형 배열 선언
	int *plist[5] = {NULL,}; //이중포인터 선언 후 초기화

	printf("-----[%s] [%s]-----\n\n", name, id); //name,  id 출력

	plist[0] = (int *)malloc(sizeof(int)); //배열 첫 번째 요소에 동적 메모리 할당
	list[0] = 1; // 배열  list의 첫 번째 요소에 1 대입
	list[1] = 100; // 배열 list의  두 번째 요소에 100 대입
	*plist[0] = 200; // 포인터 배열의 첫 번째 요소가 가리키는 메모리 공간에 200 대입
	
	printf("list[0] = %d\n", list[0]); // 배열 list의 첫 번째 요소 출력
	printf("&list[0] = %p\n", &list[0]); // 배열 list의 첫 번째 요소의 주소 출력
	printf("list = %p\n", list); // 배열 list의 주소 출력
	printf("&list = %p\n", &list); // 배열 list의 시작 주소 출력

	printf("----------------------------------------\n\n");
	printf("list[1] = %d\n", list[1]); // 배열 list의 두 번째 요소 출력
	printf("&list[1] = %p\n", &list[1]); // 배열 list의 두 번째 요소의 주소 출력
	printf("*(list+1) = %d\n", *(list + 1)); // 배열 list의 두 번째 요소 출력
	printf("list+1 = %p\n", list+1); // 배열 list의 두 번째 요소의 주소 출력

	printf("----------------------------------------\n\n");
	printf("*plist[0] = %d\n", *plist[0]); // 포인터 배열의 첫 번째 요소가 가리키는 메모리 공간의 값 출력
	printf("&plist[0] = %p\n", &plist[0]); // 포인터 배열의 첫 번째 요소의 주소 출력
	printf("&plist = %p\n", &plist); // 포인터 배열의 시작 주소 출력
	printf("plist = %p\n", plist); // 포인터 배열의 주소 출력
	printf("plist[0] = %p\n", plist[0]); // 포인터 배열의 첫 번째 요소가 가리키는 메모리의 주소 출력
	printf("plist[1] = %p\n", plist[1]); // 포인터 배열의 두 번째 요소 출력
	printf("plist[2] = %p\n", plist[2]); // 포인터 배열의 세 번째 요소 출력 
	printf("plist[3] = %p\n", plist[3]); // 포인터 배열의 네 번째 요소 출력
	printf("plist[4] = %p\n", plist[4]); // 포인터 배열의 다섯 번째 요소 출력

	free(plist[0]); // 동적으로 할당한 메모리 공간 해제
}
