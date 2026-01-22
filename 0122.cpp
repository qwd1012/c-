//#include <stdio.h>
//
//int main()
//{
//	char command = 'x';
//
//	switch(command)
//	{
//	case 'x': printf("알파벳 x 입력.\n");
//			break;
//	case 'a': printf("엑스표 입력.\n");
//			break;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i_menu;
//	printf("1.더하기 2.빼기\n");
//	scanf("%d, &i_menu");
//	switch (i_menu)
//	{
//	case 1:
//	{
//		int number1, number2;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number1, &number2);
//		printf("%d + %d = %d\n", number1, number2, number1 + number2);
//		break;
//	}
//	case 2:
//	{
//		int number3, number4;
//		printf("숫자 두 개를 입력하세요 \n");
//		scanf("%d %d", &number3, &number4);
//		printf("%d - %d = %d\n", number3, number4, number3 - number4);
//		break;
//	}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char command;
//	scanf("%c", &command);
//	switch (command)
//	{
//	case 'w': printf("위 방향키를 입력하셨습니다."); break;
//	case 'a': printf("좌 방향키를 입력하셨습니다."); break;
//	case 'd': printf("우 방향키를 입력하셨습니다."); break;
//	case 's': printf("아래 방향키를 입력하셨습니다."); break;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int appetizer, maindish, dessert;
//	printf("1.캐비어 2.샐러드 3.푸아그라\n");
//	scanf("%d", &appetizer);
//	printf("1.스테이크 2.생선요리 3.양갈비\n");
//	scanf("%d", &maindish);
//	printf("1.케잌 2.아이스크림 3.초콜릿무스\n");
//	scanf("%d", &dessert);
//	printf("주문한 음식은 ");
//	switch (appetizer)
//	{
//	case 1: printf("캐비어, "); break;
//	case 2: printf("샐러드, "); break;
//	case 3: printf("푸아그라, "); break;
//	}
//	switch (maindish)
//	{
//	case 1: printf("스테이크, "); break;
//	case 2: printf("생선요리, "); break;
//	case 3: printf("양갈비, "); break;
//	}
//	switch (dessert)
//	{
//	case 1: printf("케잌"); break;
//	case 2: printf("아이스크림"); break;
//	case 3: printf("초콜릿무스"); break;
//	}
//	printf("입니다.\n");
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		printf("%3d(%02x) ", i, i);
//		if (i >= 70 && i < 80) { i++; continue; }
//		if (i % 10 == 9) printf("\n");
//		if (i == 93) break;
//		i++;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	while (0)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	while (1)
//	{
//		printf("조건이 참일 경우 반복출력\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//
//	while (count < 3)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 3보다 작은 동안 반복\n");
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count > 0)
//	{
//		printf("현재 count : %d\n", count);
//		printf("count가 0보다 큰 동안 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int C = 6;
//	while (C > 0)
//	{
//		printf("C\n");
//		C--;
//	}
//}

//#include <stdio.h>
//int main()
//{
//	int count = -10;
//	while (count <= 0)
//	{
//		printf("%d\n", count);
//		count++;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 5;
//	while (count <= 100)
//	{
//		printf("%d\n", count);
//		count+=5;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 3;
//	while (count)
//	{
//		if (count == 1)
//		{
//			break;
//		}
//		printf("현재 count : %d\n", count);
//		printf("count가 0이 아니면 반복\n");
//		count--;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char alphabet;
//	while (1)
//	{
//		printf("알파벳를 입력해주세요(다른 것 입력시 다시입력)");
//		scanf("%c", &alphabet);
//		if(alphabet >= 'a' && alphabet <= 'z')
//		{
//			printf("소문자를 입력하셨습니다.\n");
//		}
//		else if (alphabet >= 'A' && alphabet <= 'Z')
//		{
//			printf("대문자를 입력하셨습니다.\n");
//		}
//		else { continue; }
//		printf("입력한 값 :%c\n", alphabet);
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int number, total = 0;
	while (1)
	{
		printf("양수를 입력해 주세요(0입력시 종료)");
	    
	}
}