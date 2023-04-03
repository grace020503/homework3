#include <stdio.h>

struct student 
{
	char lastName[13]; /* 13 bytes */
	int studentId; /* 4 bytes */
	short grade; /* 2 bytes */
	};
int main()
	{
		struct student pst;
		printf("size of student = %ld\n", sizeof(struct student)); // student 구조체의 크기 출력
		printf("size of int = %ld\n", sizeof(int)); // int 자료형의 크기 출력
		printf("size of short = %ld\n", sizeof(short)); // short 자료형의 크기 출력
		return 0;
}
// size of student는 총 19바이트이지마. 컴파일러에서는 메모리 최적화를 위해 4바이트 단위로 정렬하므로 총 24바이트를 출력함
