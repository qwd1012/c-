//#include <stdio.h>
//int main()
//{
//	int exitFor, number;
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (number = 10, exitFor = number - 1; exitFor ; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1부터 10까지 곱한 수 출력 : ");
//	for (int number = 10, int exitFor = number - 1; exitFor; number *= exitFor, exitFor--)
//	{
//
//	}
//	printf("%d\n", number);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count;
//	for (count = 0; count < 5; count++);
//	{
//		printf("%d\n", count);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	for (number = 11; number <= 200; number += 11)
//	{
//		printf("%d\n", number);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double sqLine;
//	for (sqLine = 0.1; sqLine * 4 <= 21; sqLine += 0.1)
//	{
//		printf("%.1lf\n", sqLine);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("1반 1번\n");
//	printf("1반 2번\n");
//	printf("1반 3번\n");
//	printf("2반 1번\n");
//	printf("2반 2번\n");
//	printf("2반 3번\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myclass = 1;
//	int student = 1;
//	printf("%d반 %d번\n", myclass, student); student++;
//	printf("%d반 %d번\n", myclass, student); student++;
//	printf("%d반 %d번\n", myclass, student); student++;
//	
//	myclass++;	student = 1;
//	printf("%d반 %d번\n", myclass, student); student++;
//	printf("%d반 %d번\n", myclass, student); student++;
//	printf("%d반 %d번\n", myclass, student); student++;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myclass = 1;
//	int student;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myclass, student);
//	}
//
//	myclass++;
//	for (student = 1; student <= 3; student++) {
//		printf("%d반 %d번\n", myclass, student);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myclass;
//	int student;
//	for (myclass = 1; myclass <= 2; myclass++) {
//		for (student = 1; student <= 3; student++) {
//			printf("%d반 %d번\n", myclass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int myclass;
//	int student;
//	for (myclass = 1; myclass <= 8; myclass++) {
//		for (student = 1; student <= 30; student++) {
//			printf("%d반 %d번\n", myclass, student);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int grade;
//	int myclass;
//	int student;
//	for (grade = 1; grade <= 8; grade++) {
//		for (myclass = 1; myclass <= 8; myclass++) {
//			for (student = 1; student <= 30; student++) {
//				printf("%d학년 %d반 %d번\n", grade, myclass, student);
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int number;
//	int multiplier;
//	for (number = 2; number <= 9; number++)
//	{
//		if (number == 3)
//			continue;
//		for (multiplier = 1; multiplier <= 9; multiplier++)
//		{
//			printf("%d * %d = %d\n", number, multiplier, number * multiplier);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int dice4;
//	int dice6;
//	for (dice4 = 1; dice4 <= 4; dice4++)
//	{
//		for (dice6 = 1; dice6 <= 6; dice6++)
//		{
//			printf("4면 - %d, 6면 - %d\n", dice4, dice6);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		printf("%d번째 내부 반복문 진입\n", outer);
//		
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("내부 반복문 %d번 반복\n", inter);
//		}
//		printf("%d번째 내부 반복문 탈출\n\n", outer);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < outer+1; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter = 0; inter < 5; inter++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer, inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5-outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int outer;
//	int inter1, inter2;
//	for (outer = 0; outer < 5; outer++)
//	{
//		for (inter1 = 0; inter1 < 5 - outer; inter1++)
//		{
//			printf(" ");
//		}
//		for (inter2 = 0; inter2 < outer + 1; inter2++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int LINE = 3;
//	scanf("%d", &LINE);
//	for (int y=1; y <= LINE;y+=1)
//	{
//		for (int x = 1; x <= y; x++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int LINE;
	scanf("%d", &LINE);

	for (int y = 1; y <= LINE; y += 1)
	{
		for (int x = LINE; x >= y; x--)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}