#include <stdio.h>

struct student1 // 구조체 student1의 정의
{
	char lastName;
	int studentId;
	char grade;
	};

typedef struct // 구조체 student2의 정의
{
	char lastName;
	int studentId;
	char grade;
	} student2;

int main() 
{ 
	struct student1 st1 = {'A', 100, 'A'}; // student1 구조체 변수 st1 선언 및 초기화
	printf("st1.lastName = %c\n", st1.lastName); // st1의 각 멤버 출력
	printf("st1.studentId = %d\n", st1.studentId);
	printf("st1.grade = %c\n", st1.grade);

        student2 st2 = {'B', 200, 'B'}; // student2 구조체 변수 st2 선언 및 초기화	
	printf("\nst2.lastName = %c\n", st2.lastName); // st2의 각 멤버 출력
	printf("st2.studentId = %d\n", st2.studentId);
	printf("st2.grade = %c\n", st2.grade);

	student2 st3; // student2 구조체 변수 st3 선언

	if (st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) 
	{
		printf("\nst3.lastName = %c\n", st3.lastName);
		printf("st3.studentId = %d\n", st3.studentId);
		printf("st3.grade = %c\n", st3.grade);
		} 
	else 
	{
		printf("not equal\n");
		}	
}
