#include <stdio.h>
#include <stdlib.h>

void main()
{
	int list[5]; // int형 배열 list 선언
	int *plist[5]; // int형 포인텅 배열 plist 선언

	list[0] = 10; // list 배열의 첫 번째 요소에 10을 할당
	list[1] = 11; // list 배열의 두 번째 요소에 11을 할당

	plist[0] = (int*)malloc(sizeof(int)); // plist의 배열의 첫 번째 요소에 int형 동적 메모리 할당

	printf("list[0] \t= %d\n", list[0]); // list의 첫 번째 요소 출력 
	printf("list \t\t= %p\n", list); // list 배열의 주소 출력
	printf("&list[0] \t= %p\n", &list[0]); // list 배열의 첫 번째 요소 주소 출력
	printf("list + 0 \t= %p\n", list+0);
	printf("list + 1 \t= %p\n", list+1);
	printf("list + 2 \t= %p\n", list+2);
	printf("list + 3 \t= %p\n", list+3);
	printf("list + 4 \t= %p\n", list+4); // list 배열의 요소 주소를 순서대로  출력
	printf("&list[4] \t= %p\n", &list[4]); // list 배열의 다섯 번째 요소 주소 출력
	
	free(plist[0]); // 동적으로 할당한 메모리 해제
}
