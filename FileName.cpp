//#include <stdio.h>
//
//void main()
//{
//	int a = 100;
//
//	while (a == 200)
//	{
//		printf("while문 내부에 들어왔습니다.\n");
//	}
//
//	do {
//		printf("do~while문 내부에 들어왔습니다.\n");
//	} while (a == 200);
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("더할 두 수 입력 (멈추려면 0을 입력) : ");
//		scanf("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//
//	printf("0을 입력해서 for문을 탈출했습니다.\n");
//}

#include <stdio.h>

void main()
{
	int hap = 0;
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			continue;

		hap += i;
	}

	printf("1~100까지의 합(3의 배수 제외): %d\n", hap);
}